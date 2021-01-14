#include <iostream>
#include <cmath>
using namespace std;

int fib(int n) 
{
  //need to define basecase
  if(n == 0)
  {
    return n;
  }
  else if(n == 1)
  {
    return n;
  }

  return fib(n-1)+fib(n-2);
}

int main()
{
  int n;
  cout << "Enter Fibonacci sequence: ";
  cin >> n;

  cout << "Fibonacci value is " << fib(n) << endl;
  return 0;
}