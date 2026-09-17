#include <iostream>
using namespace std;

class Square
{
    private:
            double armlength;

public:
    Square(double side)
    {
        armlength = side;
    }
    friend double calculateArea(const Square& square);
    friend double calculateCircumference(const Square& square);
};


double calculateArea(const Square& s1)
{
    return s1.armlength * s1.armlength;
}


     double calculateCircumference(const Square& s1)
    {
    return 4 * s1.armlength;
}



int main() 
{
    Square s1(100);
    cout <<"Area = "<< calculateArea(s1)<< endl;
    cout <<"Circumference = "<< calculateCircumference(s1)<<endl;

    return 0;
}



