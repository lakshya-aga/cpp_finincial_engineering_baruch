#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
using namespace std;
int main()
{
    vector<double> v;
    v.push_back(100.0);
    list<double> l;
    l.push_front(2); // Add to the beginning
    l.push_back(3);    // Add to the end
    cout<<l.front()<<endl;



}