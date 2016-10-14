#include <iostream>
#include <string>

class person
{
    protected:
        std::string name;
    public:
        void setName()
        { std::cout <<"Enter name: "; std::cin >> name; }
        void printName()
        { std::cout << std::endl << name; }
        std::string getName()
        { return name; }

};

int main()
{
    void bsort(person**, int);
    person * personPtr[100];
    int n = 0;
    char choice;

    do
    {
        personPtr[n] = new person;
        personPtr[n]->setName();
        n++;
        std::cout <<"Continue(y/n): ";
        std::cin >>choice;
    } while(choice == 'y');

    std::cout <<"Unsorted list."<<std::endl;
    for(int i = 0; i < n; i++)
        personPtr[i]->printName();
    std::cout <<std::endl;

    bsort(personPtr, n);

    std::cout <<"Sorted list."<<std::endl;
    for(int i = 0; i < n; i++)
        personPtr[i]->printName();
    std::cout <<std::endl;

    return 0;
}

void bsort(person ** pp, int n)
{
    void order(person **, person **);
    int j, k;

    for(j = 0; j < n - 1; j++)
        for(k = 0; k < n; k++)
            order(pp + j, pp + k);
}

void order(person ** pp1, person ** pp2)
{
    if((*pp1)->getName() > (*pp2)->getName())
    {
        person * tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
