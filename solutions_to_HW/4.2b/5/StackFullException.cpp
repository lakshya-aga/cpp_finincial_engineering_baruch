#include "StackException.hpp"

class StackFullException: public StackException{
  string GetMessage()  {
    return "Stack is FULL";
  }
};