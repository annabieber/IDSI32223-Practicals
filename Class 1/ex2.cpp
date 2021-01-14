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

int product = x*y;
std::cout << "The product is: " << product; // Display the product of the two input values

return 0; // indicates that program ended successfully
}
// end function main