#include <iostream>
using namespace std;

const double pi = 3.14; //define pi

double calculateCircumference(double radius){
    double circumference = 2 * pi * radius;
    return circumference;
}

int main()
{
    double r;
    cout << "Please enter a radius of the circle in meter: ";
    cin >> r;
    
    cout << "The circumference is : " << calculateCircumference(r) << " meters.";
    return 0;
}
