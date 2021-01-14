#include <iostream>
//using namespace std;
// function main begins program execution

void stars() {
  int i = 0;
  while(i < 5) {
    std::cout << "*";
    int j = 0;
    while(j < 1) {
      std::cout << "*";
      int k = 0;
      while(k < 1) {
        std::cout << "*";
        int m = 0;
        while(m < 1) {
          std::cout << "*";
          int n = 0;
          while(n < 1) {
            std::cout << "*"<< std::endl;
            n++;
          }
          m++;
        }
        k++;
      }
      j++;
    }
    i++;
  }
}

void stars2() {
int i = 0;
  while (i < 6) {
    int j = 0;
    while (j < i) {
      std::cout << "*";
      j++;
    }
    std::cout << std::endl;
    i++;
  } 
}

void stars3() {
  int i = 6;
  while (i > 0) {
    i--;
    int j = 0;
    while (j < i) {
      std::cout << "*";
      j++;
    }
    std::cout << std::endl;
  } 
}

int main()
{
stars();
stars2();
stars3();

return 0; // indicates that program ended successfully
}
// end function main