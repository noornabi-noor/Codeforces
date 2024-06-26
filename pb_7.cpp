#include <bits/stdc++.h>
using namespace std;

class area
{
    double height, base, radius;

public:
    area(double h, double b, double r)
    {
        height = h;
        base = b;
        radius = r;
    }

    void display(double height, double base)
    {
        double aR = height * base;
        cout << aR << "\n";
    }

    void display(double radius)
    {
        double aC = 3.14 * radius * radius;
        cout << aC << "\n";
    }

    void display(double height, double base, double)
    {
        double aT = height * base * 0.5;
        cout << aT << "\n";
    }

    // void displayR(){
    //     double aR=height*base;
    //     cout<<aR<<"\n";
    // }
    // void displayC(){
    //     double aC=3.14*radius*radius;
    //     cout<<aC<<"\n";
    // }
    // void displayT(){
    //     double aT=0.5*height*base;
    //     cout<<aT<<"\n";
    // }
};

int main()
{
    area A(20, 10, 5);
    //area A;
    // area C;
    // area T;
    cout << "Area of Rectangle: ";
    A.display(20, 10);
    cout << "Area of Circle: ";
    A.display(5);
    cout << "Area of Triangle: ";
    A.display(20, 10, 0.5);
    return 0;
}