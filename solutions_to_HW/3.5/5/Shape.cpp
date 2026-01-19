#include "Shape.hpp"
#include <string>
Shape::Shape(): m_id(rand()){}
Shape::~Shape(){
    // cout<<"Shape Destructor called..."<<endl;
}

int Shape::ID(){
    return m_id;
}
std::string Shape::ToString() const{
    return "ID: " + std::to_string(m_id);
}

Shape::Shape(const Shape &obj): m_id(obj.m_id) {}

Shape& Shape::operator=(const Shape &obj)
{
    m_id = obj.m_id;
    return *this;
}
void Shape::Draw()
{
    cout<<"Shape Base Draw"<<endl;
}
void Shape::Print()
{
    cout<<this->ToString()<<endl;
}

