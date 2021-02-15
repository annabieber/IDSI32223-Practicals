#include <iostream>
#include <cmath>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

int poly_value (double * p, int d, int x)
{
  double total = 0;
  for(int i = 0; i <= d; i++)
  {
    total += p[i]*pow(x,i);
  }
  cout << "Value of the polynomial " << total << endl; 
  return total;
}

//check which polynomial has the biggest degree
int biggest_poly(int d1, int d2)
{
  if(d1 > d2)
  {
    return d1;
  }
  else
  {
    return d2;

  }
}

double * poly_sum (double * p1, int d1, double * p2, int d2, int &dr) 
{
  double * sum_poly = new double[dr];

  for(int i = 0; i <= dr; i++) 
  {
    if(!p1[i])
    {
      sum_poly[i] = p2[i];
    }
    else if(!p2[i])
    {
      sum_poly[i] = p1[i];
    }
    else
    {
      sum_poly[i] = p1[i] + p2[i];
    }
  }
  print_poly(sum_poly, dr);
  return sum_poly;
}

double * poly_product (double * p1, int d1, double * p2, int d2, int & dr)
{
  double * prod_poly = new double[dr];

  for(int i = 0; i <= d1; i++)
  {
    for(int j = 0; j <= d2; j++)
    {
      prod_poly[i+j] += p1[i]*p2[j]; 
    }
  }
  print_poly(prod_poly, dr);
  return prod_poly;
}

int main()
{
  double *p1;
  double *p2;
  int g1;
  int g2;
  

  //get the degree of the polynomial and the values for the coefficients of the polynmial
  p1 = read_poly(g1);
  p2 = read_poly(g2);
  print_poly(p1,g1);
  print_poly(p2, g2);

  
  int x = 4;
  //calculate the polynomial given x
  int result = poly_value(p1, g1, x);

  double *sum;
  double *product;
  
  int degree_result_sum = biggest_poly(g1, g2);
  int degree_result_prod = g1+g2;

  //calculate the sum of two polynomials
  sum = poly_sum(p1, g1, p2, g2, degree_result_sum);
  //calculate the product of two polynomials
  product = poly_product(p1, g1, p2, g2, degree_result_prod);


  delete[] p1;
  delete[] p2;
  delete[] sum;
  delete[] product;
  return 0;
}