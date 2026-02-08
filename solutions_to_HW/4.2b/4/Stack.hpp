#include "Array.cpp"
#ifndef STACK_HPP
#define STACK_HPP
template <typename T>
class Stack
{
    private:
        int m_current;
        Array<T>::Array m_data;
    public:
        Stack();
        ~Stack();
        T Pop();
        void Push(T item);
        Stack<T>& operator=(const Stack& temp);

    
};
#endif