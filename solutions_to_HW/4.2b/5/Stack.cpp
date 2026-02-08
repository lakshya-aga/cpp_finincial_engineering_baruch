#include "Stack.hpp"
#ifndef STACK_CPP
#define STACK_CPP
#include "StackFullException.cpp"
#include "StackEmptyException.cpp"
template <typename T>
void Stack<T>::Push(T item){
        m_current++;
        m_data.SetElement(m_current, item);
    
    // If exception rollback error handling can be done by handling exception on Array Level, then catch and throw StackError
}

template <typename T>
T Stack<T>::Pop(){
    
    
    if(m_current--<0){
        m_current = 0;
        throw StackEmptyException();
    }
    
    return m_data.GetElement(m_current);
    
}

template<typename T>
Stack<T>::~Stack(){

}

template<typename T>
Stack<T>::Stack(){
    m_current = 0;

}
template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& temp)
{
    if (temp==this)
    return this;

    for(int i=0; i<m_current; i++)
    m_data.SetElement(i, temp);
}
#endif