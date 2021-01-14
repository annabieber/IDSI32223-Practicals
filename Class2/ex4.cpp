#include <iostream>
#include <cmath>
using namespace std;

void floyd (int rows) 
{
  int j = 1;
  for(int i = 1; i <= rows; i++) 
  {
    int sumRow = (i * (pow(i, 2)+1))/2;
    int currentSum = 0;
    while(currentSum < sumRow) 
    {
      cout << j << " ";
      currentSum += j; 
      j++;
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter the number of rows in floyd's triangle: ";
  cin >> n;

  floyd(n);
}
