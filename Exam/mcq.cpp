#include<iostream>
using namespace std;

/* int f(int a[], int n, int &m)
{
  int i;
  m=-a[0];
  a[0] += 1;
  for(i = 1; i<n; i++)
  {
    m -= a[i];
    a[i] +=1;
  }
  return a[i-1]+1;
} */

int f(int n)
{
  if(n < 1)
  {
    return 0;
  }
  else if ()
}

int main()
{
 // cout << "here";
  int v[4], a=0, b=0;
  //cout << "here";
  for(int i=0; i<4; i++)
  {
    cin >> v[i];
  } 
  a=f(v,4,b);
  cout<<a<<" "<<b<<" "<<v[0] <<" "<<v[1] << " " << v[2] << " " << v[3];
  return 0;
}