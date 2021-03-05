using namespace std;
#include <string>
#include <vector> 
#include <iostream>

class PointVector
{
    
  public:
    int size;
    vector<double> points { 2.5, 1, 1.5, 0, 4.5, 5, 5, 5, 1, 2};
    PointVector(int n) 
    {
      size = n;
    };

    void create_vector()
    {
      double tempx, tempy;
      for(int i = 0; i < size; i = i+2)
      {
        cout << "Enter x coordinate: ";
        cin >> tempx ;
        cout << endl;
        points.push_back(tempx);
       
        cout << "Enter y coordinate: ";
        cin >> tempy ;
        cout << endl;   
        points.push_back(tempy);

      }
    }

    void display_vector()
    {
      cout << "Vector = [";
      for(int i = 0; i < size; i = i+2)
      {
        cout << "(" << points.at(i) << ", " << points.at(i+1) << ")";

        if(i != size - 2)
        {
          cout << ", ";
        }
      }
      cout << "] " << endl;
    }

    void max_x_coordinate()
    {
      double biggest = points.at(0);
      for(int i = 0; i < size; i = i+2)
      {
        if(points.at(i) > biggest)
        {
          biggest = points.at(i);
        }
      }
      cout << "Biggest x coordinate in the list of points is: " << biggest << endl;
    }

    void euclidean_distance()
    {
      int number_of_points = size/2;


    }

    double sub_vector()
    {
     
      
      vector<double> current;
      vector<double> max;

      for(int i = 0; i < size-2; i=i+2)
      {
        if(points.at(i) < points.at(i+2))
        {
          current.push_back(points.at(i));
          if(i != size-2)
          {
            if(points.at(i+2) > points.at(i+4))
            {
              current.push_back(points.at(i+2))
            }
          }
        }
        else
        {
          if(current.size() > max.size())
          {
            max.clear();
            max = current;
            current.clear();
          }
        }
       
       
      }
      double sum = 0;
      for(int j = 0; j < max.size(); j++)
      {
        sum += max.at(j);
      }
      
      cout << "The sum of their x coordinate is: " << sum << endl;
      
      return sum;
    }
};


int main()
{
  PointVector vector(10);
  //vector.create_vector();
  vector.display_vector();
  vector.max_x_coordinate();
  vector.sub_vector();

  return 0;
}