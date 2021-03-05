#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class Fraction
{
  private:
    int num;
    int denum;
  public:

  //no argument constructor
  Fraction()
  {
   num = 0;
   denum = 0;
  }

  Fraction(int n, int d)
  {
    num = n;
    denum = d;
  }

  Fraction(const Fraction &fr)
  {
    num = fr.num;
    denum = fr.denum;
  }

  int getNum()
  {
    return num;
  }

  int getDen()
  {
    return denum;
  }

  void setNum(int numerator)
  {
    num = numerator;
  }

  void setDen(int denominator)
  {
    num = denominator;
  }

  friend ostream& operator<<(ostream &out, const Fraction &fr);

  Fraction operator+(const Fraction &fr1);

  Fraction operator-(const Fraction &fr1);

  Fraction operator*(const Fraction &fr1);

  Fraction operator/(const Fraction &fr1);

  Fraction operator=(const Fraction &fr1);

  Fraction operator+=(const Fraction &fr1);

  Fraction reciprocal()
  {
    int temp = num;
    num = denum;
    denum = temp;
  }
  
};

ostream& operator<<(ostream& os, const Fraction &fr)
{
    os << fr.num << "/" << fr.denum;
    return os;
}

Fraction Fraction::operator+(const Fraction &fr1)
{
  if(num == 0 || denum == 0)
  {
    return Fraction(fr1.num, fr1.denum);
  }
  else if(fr1.num == 0 || fr1.denum == 0)
  {
    return Fraction(num, denum); 
  }
  else
  {
    int top1 = num * fr1.denum;
    int top2 = denum * fr1.num;
    return Fraction(top1 + top2, denum * fr1.denum);
  }
  
}

Fraction Fraction::operator-(const Fraction &fr1)
{
  int top1 = num * fr1.denum;
  int top2 = denum * fr1.num;
  return Fraction(top1 - top2, denum * fr1.denum);
}

Fraction Fraction::operator*(const Fraction &fr1)
{
  return Fraction(num * fr1.num, denum * fr1.denum);
}

Fraction Fraction::operator/(const Fraction &fr1)
{
  return Fraction(num * fr1.denum, denum * fr1.num);
}

Fraction Fraction::operator=( Fraction const &f1)
{
  num = f1.num;
  denum = f1.denum;
  return *this;
}

Fraction Fraction::operator+=(const Fraction &fr1)
{
  
  if(num == 0 || denum == 0)
  {
    num = fr1.num;
    denum = fr1.denum;
  }
 
  else
  {
    int top1 = num * fr1.denum;
    int top2 = denum * fr1.num;
    int bottom = denum * fr1.denum;

    num = top1 + top2;
    denum = bottom; 
  }

  return *this;

}


class FractionVector
{
  private:
    Fraction *fv;
    int size;
    
  public:

  FractionVector(int v[], int n)
  {
    size = n/2;
    fv = new Fraction[n/2];
    for(int i = 0; i < n; i = i+2)
    {
      Fraction temp(v[i], v[i+1]);
      fv[i/2] = temp; 
    }

  };

  // INSIDE THE FractionVector CLASS
  friend std::ostream& operator<<(std::ostream&,const FractionVector&);

  Fraction sum()
  {
    Fraction total;
    for(int i = 0; i < size; i++)
    {
      total += fv[i];
    }
    return total;
  }

};

// OUTSIDE THE FractionVector CLASS
std::ostream& operator<<(std::ostream& out,const FractionVector& v){
  out << "frvect=[";
  for(int i=0;i<v.size;i++){
    out << v.fv[i] ;
    if(i<v.size-1)
      out << ",";
  }
  out << "]" ;
  return out;
}


int main()
{

  // TEST CASE CONSTRUCTOR OF FRACTION
 /*  Fraction f1(2,3);
  cout << f1.getNum() << " " << f1.getDen(); */ 

  // TEST CASE COPY CONSTRUCTOR FRACTION
 /*  Fraction f3(1,2);
  Fraction f5(f3);
  cout << f5 << endl;

  // TEST cout<< for FRACTION
  Fraction f1(2,3);
  cout << f1; */

  // TEST CASE SUM OF FRACTIONS
/*   Fraction f1(2,3);
  Fraction f2(4,7);
  cout << f1+f2 << endl; */

  // TEST CASE SUBSTRACTION OF FRACTIONS
  /* Fraction f1(2,3);
  Fraction f2(4,7);
  cout << f1-f2 << endl;  */

  // TEST CASE MULTIPLICATION OF FRACTIONS
/*   Fraction f1(2,3);
  Fraction f2(4,7);
  cout << f1*f2 << endl; */
 
  // TEST CASE DIVISION OF FRACTIONS
/*   Fraction f1(2,3);
  Fraction f2(4,7);
  cout << f1/f2 << endl; */

  //TEST CASE RECIPROCAL OF A FRACTION
 /*  Fraction f1(2,3);
  f1.reciprocal();
  cout << f1.getNum() << " " << f1.getDen() << endl; */

  // TEST ASSIGNMENT FRACTION 
  /* Fraction f3(1,2);
  Fraction f4(2,3);
  f3 = f4;
  cout << f3; */

  // TEST SUM_ASSIGNMENT FRACTION 
 /*  Fraction f3(1,2);
  Fraction f4(2,3);
  f3 += f4;
  cout << f3; */

  // TEST CASE CONSTRUCTOR OF FRACTIONVECTOR
/*   int v1[] = {1,2,2,3,3,4};
  FractionVector fv1(v1,6);
  cout << fv1 << endl; */

  // TEST CASE FractionVector sum()
  /* int v1[] = {1,2,2,3,3,4};
  FractionVector fv1(v1,6);
  cout << fv1 << endl;
  cout << fv1.sum() << endl; */


  return 0;
}