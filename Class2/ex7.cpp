#include <iostream>
#include <cmath>
using namespace std;

//global variables
int counter1 = 0;
int counter2 = 0;

int power1(int n, int a) 
{
  counter1++;
  if(n == 0)
  {
    return 1;
  }

  return a*pow(a, n-1);
}

int power2(int n, int a)
{
  counter2++;
  if(n == 0)
  {
    return 1;
  }
  else if((n%2)==0)
  {
    return pow(a, n/2)*pow(a, n/2);
  }
  else 
  {
    return pow(a, static_cast<double>(n)/2)*pow(a,static_cast<double>(n)/2)*a;
  }
}

void test_case(int n, int a) 
{
  power1(n, a);
  power2(n, a);

  cout << "Number of recursion calls for the first method is " << counter1 << endl;
  cout << "Number of recursion calls for the second method is " << counter2 << endl;
}

int main()
{
  int n, a;
  cout << "Enter the power value: " ;
  cin >> n;
  cout << "Enter the number value: ";
  cin >> a;

  cout << "a to the power n is " << power1(n, a) << endl; 
  cout << "a to the power n is " << power2(n, a) << endl;

  test_case(n, a);

  return 0;
}