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

  return a*power1(n-1, a);
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
    return power2(n/2, a)*power2(n/2, a);
  }
  else 
  {
    return power2(n/2, a)*power2(n/2, a)*a;
  }
}

void test_case(int n, int a) 
{
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

  cout << a << " to the power " << n << " with the first method is " << power1(n, a) << endl; 
  cout << a << " to the power " << n << " with the second method is " << power2(n, a) << endl;

  test_case(n, a);

  return 0;
}

/* To answer the question:
  For the first function the relationship between the exponent n and the number of recursion calls denoted as r is r = n+1.
  For the second function the relationshipt between the exponent n and the number of recursion calls denoted as r is r = (n-1)*2+1

 */