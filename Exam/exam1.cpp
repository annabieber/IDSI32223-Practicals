#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class PointVector 
{
  private:
    int size;
    double* vector;
  
  public:
    PointVector(int n)
    {
      size = n;
    }
    PointVector(double* v, int n)
    {
      vector = v;
      size = n;
    }
    PointVector(PointVector &pv)
    {
      vector = pv.vector;
      size = pv.size;
    }

    double* getV()
    {
      return vector;
    }

    int getSize()
    {
      return size;
    }

    double getX(int i)
    {
      return vector[i*2];
    }

    void displayMax()
    {
      double max_x = vector[0];
      double max_y = vector[1];
      for(int i = 0; i < size; i = i+2)
      {
        if(vector[i] > max)
        {
          max_x = vector[i];
          max_y = vector[i+1];
        }
      }
      cout << "(" << max_x << "," << max_y <<")" << endl;
    }

    double distanceP(int p1, int p2)
    {
      double x[] = new double[size/2];
      double y[] = new double[size/2];
      for(int i = 0; i < size; i = i+2)
      {
        x[i] = vector[i];
        y[i] = vector[i+1];
      }

      double distance = sqrt(pow((x[p1-1]- x[p2-1]),2), pow(y[p1-1]- y[p2-1]));
      return distance;
    }

    friend ostream& operator<<(ostream& os, const PointVector& pv);

    //friend ostream& operator+(ostream& os, const PointVector& pv);

}

ostream& operator<<(ostream& os, const IntVector& iv)
{
    os << "pvector=[";
    for(int i = 0; i < iv.size; i=i+2)
    {
      os << "(" << iv.vector[i] << "," << iv.vector[i+1] << ")";
      if(i != iv.size-2)
      {
        os << ", "; 
      }
    }
    os << "]" << endl;
    return os;
}

/* ostream& operator+(ostream& os, const IntVector& iv)
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
} */

int main()
{
  
}