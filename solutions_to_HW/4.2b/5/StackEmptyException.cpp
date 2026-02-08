#include "StackException.hpp"

class StackEmptyException: public StackException{
  string GetMessage()  {
    return "Stack is Empty";
  }
};