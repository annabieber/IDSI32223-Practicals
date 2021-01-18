#include <iostream>
#include <cmath>
using namespace std;

void isInCircle() 
{
  double x, y, r, xcenter, ycenter;
  cout << "Enter the x-coordinate: ";
  cin >> x;
  cout << "Enter the y-coordinate: ";
  cin >> y;
  cout << "Enter the radius of the cercle: ";
  cin >> r;
  cout << "Enter the x-coordinate of the center of the cercle: ";
  cin >> xcenter;
  cout << "Enter the y-coordinate of the center of the cercle: ";
  cin >> ycenter;

  //need to check if the distance between the point and the center is bigger or smaller than the radius
  double distance = sqrt(pow(x-xcenter,2)+pow(y-ycenter, 2));

  if(distance > r){
    cout << "The point is outside the circle";
  }
  else {
    cout << "The point is inside the circle";
  }
}

int main()
{
  isInCircle();
  return 0;
}