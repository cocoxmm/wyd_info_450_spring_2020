
#include <iostream>
using namespace std;

const double pi = 3.14; //define pi

int main()
{
    double circumference, r;
    cout << "Please enter a radius of the circle in meter: ";
    cin >> r;
    circumference = 2 * pi * r;
    
    cout << "The circumference is : " << circumference << " meters.";
    return 0;
}
