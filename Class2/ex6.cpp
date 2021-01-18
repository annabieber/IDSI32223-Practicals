#include <iostream>
#include <cmath>
using namespace std;

int  counter = 0; 

int fib(int n) 
{
  counter++;
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
  cout << "Number of recursion calls is " << counter << endl;
  return 0;
}