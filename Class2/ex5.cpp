#include <iostream>
#include <cmath>
using namespace std;

void fib(int n) 
{
  
  int a = 0;
  int b = 1;
  if(n == 0) 
  {
    cout << "Fibonacci value is " << a << endl;
  }
  else if (n == 1) 
  {
    cout << "Fibonacci value is " << b << endl;
  }
  else 
  {
    int fibonacci_value;
    for(int i = 2; i <= n; i++) 
    {
      fibonacci_value = a + b;
      a = b;
      b = fibonacci_value;
    }
    cout << "Fibonacci value is " << fibonacci_value << endl;
  }

}

int main()
{
  int n;
  cout << "Enter Fibonacci sequence: ";
  cin >> n;

  fib(n);
  return 0;
}