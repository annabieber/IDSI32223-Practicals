#include <iostream>
#include <cmath>
using namespace std;

void simpleApproximation() {
  int n;
  cout << "Approximation number: ";
  cin >> n;
  
  double approximation;
  for(int i = 0; i < n; i++) {
    approximation += pow(-1, i)*(4/static_cast<double>(2*i+1));
  }
  cout << "Approximation is " << approximation << endl;
}

void doubleApproximation() {

  double sigma;
  cout << "Sigma value: ";
  cin >> sigma;

  double approx1 = 0;
  double approx2 = 0;
  int i = 0; 

  while (true) {
    approx1 = approx2;
    approx2 += pow(-1, i)*(4/static_cast<double>(2*i+1));
    if(abs(approx1-approx2) < sigma) {
      break;
    }
    i++;
  }
  cout <<"The approximation of pi is " << approx2 << endl;
}

// function main begins program execution
int main()
{
  simpleApproximation();
  doubleApproximation();
  
  return 0; // indicates that program ended successfully
}

