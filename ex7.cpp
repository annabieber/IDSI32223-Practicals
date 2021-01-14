#include <iostream>
using namespace std;
// function main begins program execution
int main()
{
    
  int min;
  std::cout << "Type a number: ";
  std::cin >> min; 
  int max;
  std::cout << "Type a number: ";
  std::cin >> max;

  if(min > max){
    int temp = min;
    min = max;
    max = temp;
  }
  
  for(int i = 0; i < 8; i++) {
    int temp2;
    std::cout << "Type a number: ";
    std::cin >> temp2;

    if(temp2 < min) {
      min = temp2;
    }
    else if(temp2 > max) {
      max = temp2;
    }
  }

  std::cout << "Max value: " <<max << std::endl;
  std::cout << "Min value: " <<min << std::endl;

}