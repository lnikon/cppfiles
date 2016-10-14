#include <iostream>

/**< Classes */
class Cars
{
    private:        
        static int objectID;
        static int carsNumber;
        static int totalMoney;
    public:
        Cars()
        {
            ++objectID;
            ++carsNumber;
            totalMoney += 100;
        }

        friend class CountSystem;

};

class CountSystem
{
    private:
    public:
        void showMoney();
        void showCarsNumber();
        void clearCash();

};

/**< Methods */
void showMoney()
{
    if(totalMoney <= 0)
        std::cout <<"No cash!"<<std::endl;
    else
        std::cout <<"Cash: "<<totalMoney<<std::endl;
}

/**< Main Funcion */
int main(int argc, char *argv[])
{

    return 0;
}
