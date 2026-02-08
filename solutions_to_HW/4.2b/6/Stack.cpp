#include "Stack.hpp"
#ifndef STACK_CPP
#define STACK_CPP
#include "StackFullException.cpp"
#include "StackEmptyException.cpp"
template <typename T, int n>
void Stack<T, n>::Push(T item){
        m_current++;
        m_data.SetElement(m_current, item);
    
    // If exception rollback error handling can be done by handling exception on Array Level, then catch and throw StackError
}

template <typename T, int n>
T Stack<T, n>::Pop(){
    
    
    if(m_current--<0){
        m_current = 0;
        throw StackEmptyException();
    }
    return m_data.GetElement(m_current);
    
}

template <typename T, int n>
Stack<T, n>::~Stack(){

}

template <typename T, int n>
Stack<T, n>::Stack(): m_data(n){
    m_current = 0;
}
template <typename T, int n>
Stack<T, n>& Stack<T, n>::operator=(const Stack<T, n>& temp)
{
    if (temp==this)
    return this;

    for(int i=0; i<m_current; i++)
    m_data.SetElement(i, temp);
}
#endif