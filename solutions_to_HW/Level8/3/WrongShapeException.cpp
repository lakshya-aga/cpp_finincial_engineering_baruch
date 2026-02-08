#include <iostream>
#include <sstream>
#include <string>
class WrongShapeException{
    public:
        std::string GetMessage(){
            return "Wrong Shape";
        }
};