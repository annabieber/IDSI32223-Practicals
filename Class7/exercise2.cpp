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
    int nbrelements;
    int size;
    vector<T> stack;
    
    Stack(): stack(20), nbrelements(0), size(20) {};
    Stack(int n): stack(n), nbrelements(0), size(n) {};

    void push(T t) 
    {
      //check if stack is full
      if(nbrelements == 20)
      {
        throw FullStackException();
      }
      //if not full, add to the back of the stack 
      else 
      {
        stack.at(nbrelements) = t;
        nbrelements++;
      }
    }

    void pop() 
    {
      //if stack is empty throw exception
      if(nbrelements == 0)
      {
        throw EmptyStackException();
      }
      //if the stack is not empty, remove the last element
      else
      {
        
        nbrelements--;
      }

    }


    T top() 
    {
      
      if(nbrelements == 0)
      {
        throw EmptyStackException();
      }
      //if the stack is non empty return the first element
      return stack.at(0);
      
    }

    bool isEmpty()
    {
      if(nbrelements == 0)
      {
        return true;
      }
      else
      {
        return false;
      }

    }


    void print()
    {
      cout << '[';
      if(nbrelements > 0)
      {
        for(int i = 0; i < nbrelements; i++) 
        {
          cout << stack.at(i) << ' ' ;
        }
      }
      cout << ']' << endl;
    }
};

int main()
{

  Stack<int> stack1;
  Stack<int> stack2(30);

  stack2.print();

  try 
  {
    stack2.pop();
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }

  try 
  {
    for (int i = 0; i < 20; i++) 
    {
      stack1.push(1);
    }
    stack1.push(2);
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  
  stack1.print();
  stack1.pop();
  stack1.print();

  try {
    int top = stack1.top();
    cout << "Top value: " << top << endl; 
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  return 0;
}