#include "Stack.hpp"
#ifndef STACK_CPP
#define STACK_CPP
template <typename T>
void Stack<T>::Push(T item){
    m_current++;
    m_data.SetElement(m_current, item);
    // If exception rollback
}

template <typename T>
T Stack<T>::Pop(){
    
    return m_data.GetElement(m_current--);
    
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