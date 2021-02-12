using namespace std;
#include <string>
#include <vector> 
#include <iostream>

struct FullStackException : public exception
{
	const char * what () const throw ()
    {
    	return "The stack is full";
    }
};

struct EmptyStackException : public exception
{
	const char * what () const throw ()
    {
    	return "The stack is empty";
    }
};


template <typename T>
class StackI
{
  public:
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
};



template<typename T>
class Stack: public StackI<T>
{
  
  public:
    vector<T> stack;
    Stack(): stack(20) {};
    Stack(int n): stack(n) {};

    void push(T t) 
    {
      //check if stack is full
      if(stack.empty())
      {
        throw FullStackException();
      }
      //if not full, add to the back of the stack 
    }

    void pop() 
    {
      //if stack is empty throw exception
      if(stack.empty())
      {
        throw EmptyStackException();
      }
      //if the stack is not empty, remove the last element

    }


    T top() 
    {
      //if stack is empty throw exception
      if(stack.empty())
      {
            cout <<"here";

        throw EmptyStackException();
      }
      //if the stack is non empty return the first element
      return stack.at(0);
      
    }

    bool isEmpty()
    {

    }


    void print()
    {
      cout << '[';
      if(!stack.empty())
      {
        for(int i = 0; i < stack.size(); i++) 
        {
          cout << stack.at(i) << ' ' ;
        }
      }
      
      cout << ']' << endl;
    }
};

int main()
{

  Stack<int> stack;
  try {
    stack.top();
  }
  catch (EmptyStackException &e) {
    cout << e.what() << endl;
  }

  return 0;
}