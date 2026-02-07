#include <iostream>
#include "Stack.cpp"
#include "Array.cpp"
using namespace std;
int main()
{
    Stack<int> s;
    s.Push(4);
    s.Push(3);
    s.Push(2);
    s.Push(1);
    for(int i=0; i<4; i++)
    cout<<s.Pop()<<endl;

}