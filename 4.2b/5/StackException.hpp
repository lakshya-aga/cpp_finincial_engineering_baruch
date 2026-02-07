#ifndef STACKEXCEPTION_HPP
#define STACKEXCEPTION_HPP

#include <iostream>
using namespace std;
class StackException{
    public:
        virtual string GetMessage() = 0;
};
#endif