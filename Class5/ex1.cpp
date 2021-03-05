#include <iostream>
#include <cmath>
using namespace std;

void string_numbers (string str) 
{
  bool all_numbers = false;
  for(int i = 0; i < str.length(); i++)
  {
    if(str.at(i) < '0' || str.at(i) > '9')
    {
      all_numbers = false;
      break; 
    }
    else 
    {
      all_numbers = true;
    }
    
  }
  cout << "Only digits: " << all_numbers << endl;
}

void string_occurences(string pair, string str)
{
  int occurences = 0;
  for (int i = 0; i < str.length(); i++)
  {
    
    if(str.at(i) == pair.at(0) && str.at(i+1) == pair.at(1))
    {
      occurences++;
    }

  }
  cout << "Number of occurences: " << occurences << endl;
}

int main ()
{
  
  string_numbers("5m3");
  string_occurences("ab", "dfdbf8987ffauut");

  return 0;
}