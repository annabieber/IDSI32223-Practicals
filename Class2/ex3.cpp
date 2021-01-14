#include <iostream>
#include <cmath>
using namespace std;

void swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
  int x, y;
  cout << "Enter a value for x: ";
  cin >> x;
  cout << "Enter a value for y: ";
  cin >> y;

  swap(x,y);
  
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}