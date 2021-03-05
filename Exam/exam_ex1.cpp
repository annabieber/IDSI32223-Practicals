using namespace std;
#include <string>
#include <vector> 
#include <iostream>


void cross (int n) 
{
  for (int i = 0; i < n; i++)
  {
    cout << "x";
    if(i == 0 || i == n-1)
    {
      for(int j = 2; j < n; j++)
      {
        cout << "x";
      }
    }
    else
    {
      for(int j = 1; j < n-1; j++)
      {
        if(j == (n/2) && i==j)
        {
          cout << "x";
        }
        else if (i == j || j == (n-1-i))
        {
          cout << "x";
        }
        else 
        {
          cout << " ";
        }
      }

    }
    cout << "x" << endl;
  }
}

int main()
{

  cross(17);

  return 0;
}