#include <iostream>
//using namespace std;
// function main begins program execution
int main()
{
int x; 
std::cout << "Type a first number: "; // Type a number and press enter
std::cin >> x; // Get user input from the keyboard
int y;
std::cout <<"Type a second number: ";
std::cin >> y; // Get user input from the keyboard

int modulo = y%x;
if (modulo == 0) {
  std::cout << "The number is a multiple" ;
}
else {
    std::cout << "The number is not a multiple" ;
}

return 0; // indicates that program ended successfully
}
// end function main