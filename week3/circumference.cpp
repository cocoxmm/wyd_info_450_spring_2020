//
//  main.cpp
//  circumference
//
//  Created by Coco on 1/31/20.
//  Copyright © 2020 Coco. All rights reserved.
//

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
