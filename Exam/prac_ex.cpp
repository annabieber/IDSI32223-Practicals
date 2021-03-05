#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class IntVector
{
  private:
    int *vector1;
    int size;

  public: 

  IntVector(int n)
  {
    vector1 = new int[n];
    size = n;
    for(int i = 0; i < n; i++)
    {
      vector1[i] = 0;
    }
  };

  IntVector(int *vector2, int n)
  {
    vector1 = new int[n];
    for(int i = 0; i < n; i++)
    {
      vector1[i] = vector2[i];
    }
    //vector1 = vector2;
    size = n;
  };

  //copy constructor
  IntVector(const IntVector &iv)
  {
    vector1 = iv.vector1;
    size = iv.size;
  };

  int maxEven()
  {
    vector<int> temp;
      for(int i = 0; i < size; i++)
      {
        if(vector1[i]%2 ==0)
        {
          temp.push_back(vector1[i]);
        }
      }
    if(temp.size() == 0)
    {
      return 0;
    }
    else
    {
      int max = temp.at(0);
      for(int i = 0; i < temp.size(); i++)
      {
        if(max < temp.at(i))
        {
          max = temp.at(i);
        }
      }
      return max;
    }
    
  }

  int f(int i) 
  {
    int square_root = sqrt(vector1[i-1]);
    return square_root;
  }

  friend ostream& operator<<(ostream& os, const IntVector& iv);

};

ostream& operator<<(ostream& os, const IntVector& iv)
{
    os << "intvector=[";
    for(int i = 0; i < iv.size; i++)
    {
      os << iv.vector1[i];
      if(i != iv.size-1)
      {
        os << ", "; 
      }
    }
    os << "]";
    return os;
}

int main()
{
  // TEST CONSTRUCTOR AND cout<<
  int v1 [] = {1,2,3,4};
  IntVector iv1(v1,4);
  cout << iv1 << endl;

  // TEST maxEven()
  int v2 [] = {3,99,88,1,2,3,4};
  IntVector iv2(v2,7);
  cout << iv2.maxEven() << endl;

  // TEST f(int) 
  int v3 [] = {4,22,88,1,2,3,9};
  IntVector iv3(v3,7);
  cout  << iv3.f(1) << " " << iv3.f(7) << endl;

  return 0;
}


    
