#include <iostream>
// function main begins program execution
int main()
{
int x; 
std::cout << "Type a first number: "; // Type a number and press enter
std::cin >> x; // Get user input from the keyboard

int i = 1;
int temp = 1; 
while(i <= x) {
  temp = temp * i; 
  i++;
}
std::cout<<"Number: "<< temp;
return 0; // indicates that program ended successfully
}
// end function main