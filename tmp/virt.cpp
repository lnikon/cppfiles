#include <iostream>
#include <string>

class BaseClass 
{
    protected:
        std::string name;
    public:
        BaseClass(): name("BASE class") {}
        
        virtual print() const; 
};

class SecondClass: BaseClass()
{
    public:
        SecondClass(): name("SECOND class") {}
        print()
            std::cout <<name<<std::endl;
};

class ThirdClass: BaseClass 
{
    public:
        ThirdClass(): name("THIRD class") {}
        print()
            std::cout <<name<<std::endl;
};
