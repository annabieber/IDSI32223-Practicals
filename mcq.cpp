#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int f(int  n)
{
  if(n <=1)
    return 0;
  if(n%2==0)
    return n+f(n-1);
  else
    return f(n-1);
}





int main()
{
 
  cout << f(-4) <<endl;
  cout << f(10) <<endl;

  cout << f(5) <<endl;

  return 1;
}