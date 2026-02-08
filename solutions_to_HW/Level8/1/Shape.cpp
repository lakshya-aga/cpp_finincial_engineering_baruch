#include "Shape.hpp"
#include <string>
Shape::Shape(): m_id(rand()){}

int Shape::ID(){
    return m_id;
}
std::string Shape::ToString(){
    return "ID: " + std::to_string(m_id);
}

Shape::Shape(const Shape &obj): m_id(obj.m_id) {}

Shape& Shape::operator=(const Shape &obj)
{
    m_id = obj.m_id;
    return *this;
}

