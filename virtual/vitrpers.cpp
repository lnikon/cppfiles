#include <iostream>
#include <string>

class Person
{
    protected:
        std::string name;
    public:
        void getName()
        { std::cout <<"Enter name: "; getline(std::cin, name); }
        void putName()
        { std::cout <<"Name: "<<name<<std::endl; }

        virtual void getData()=0;
        virtual bool isOutstanding()=0;
};

class Student: public person

    private:
        float gpa;
    public:
        void getData()
        {
            person::getName();
            std::cout <<"Ender medium ball: "; std::cin >>gpa;
        }

        bool isOutstanding()
        { return if(gpa > 3.5) ? true : false; }
};

class Professor: public person
{
    private:
        int PubNum;
    public:
        void getData()
        {
            person::getName();
            std::cout <<"Publications number: "; std::cin >>PubNum;
        }

        bool isOutstanding()
        { return (PubNum > 100) ? true : false; }
};

int main(int argc, char * argv[])
{
    Person *persPtr[100];
    int n = 0;
    char choice;

    do
    {
        std::cout <<"Student(s) or professor(p) (default: professor): ";
        std::cin >>choice;
        if(choice == 's')
            persPtr[n] = new Student;
        else
            persPtr[n] = new Professor;
        persPtr[n++]->getData();
        std::cout <<"Add any one?(y): ";
        std::cin >>choice;
    } while(choice = 'y');

    return 0;
