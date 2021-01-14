#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int position, speed, acceleration;
  cout << "Enter the initial position, the speed and the acceleration" ;
  cin >> position >> speed >> acceleration; 
  
  int display;
  cout << "How many times you want to display the position of the moving body? ";
  cin >> display; 

  double update;
  cout << "How often (in seconds) you want to update the position of the moving object? ";
  cin >> update;

  cout << "–––––––––––––––––––––––" << endl;
  cout << endl;
  cout << "Acceleration: " << acceleration << " Initial speed: " << speed << " Initial position: " << position << " Number of times: " << display << " Dela t" << update << endl;

  double time = 0;
  for(int i = 0; i < display; i++) 
  {
    double position2 = position + speed * time + 0.5 * acceleration * pow(time, 2);
    
    cout << "At time " << time << " the position is " << position2 << endl;
    time += 0.5;
  }


  return 0;
}