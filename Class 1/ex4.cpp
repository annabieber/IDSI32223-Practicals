#include <iostream>
//using namespace std;
// function main begins program execution
int main()
{
int x; 
std::cout << "Type a number: "; // Type a number and press enter
std::cin >> x; // Get user input from the keyboard

int i = 0;
while(i < x) {
  std::cout << "*" ;
  i++;
}

return 0; // indicates that program ended successfully
}
// end function main