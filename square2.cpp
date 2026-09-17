#include <iostream>
using namespace std;

class Square; //ikfjijfdig dfjgikfjgisdigsdiogjsdiofjgg

class Squareeee
{
public:
    double calculateArea(const Square& square);
    double calculateCircumference(const Square& square);
};

class Square
{
private:
    double armlength;

public:
    Square(double side)
    {
        armlength = side;
    }

    friend class Squareeee;
};

double Squareeee::calculateArea(const Square& s1)
{
    return s1.armlength * s1.armlength;
}

double Squareeee::calculateCircumference(const Square& s1)
{
    return 4 * s1.armlength;
}

int main()
{
    Square s1(100);
    Squareeee ss;

    cout << "Area = " << ss.calculateArea(s1) << endl;
    cout <<"Circumference = "<< ss.calculateCircumference(s1)<<endl;

    return 0;
}
