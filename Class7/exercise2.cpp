using namespace std;
#include <string>
#include <vector> 
#include <iostream>

class StackI<T> 
{
  public:
    void push(T t) = 0;
    void pop() = 0;
    T top() =0;
    bool isEmpty() =0;
    void print()=0;
};

class Stack: public StackI<T>
{
  void push(T t) 
  {

  }

  void pop() 
  {

  }


  T top() 
  {

  }

  bool isEmpty()
  {

  }


  void print()
  {
    
  }
};

int main()
{

  return 0;
}