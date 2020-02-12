//
//  main.cpp
//  week4program
//
//  Created by Coco on 2/11/20.
//  Copyright © 2020 Coco. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

float sd(float num[])
{
    int s = 0.0;
    float mean;
    float standardD = 0.0;
    int i;
    for (i=0; i<10; ++i)
    {
        s += num[i];
    }
    mean = s/10;
    for(i=0; i<10; ++i)
    {
        standardD += pow(num[i] - mean, 2);
    }
    return sqrt(standardD/10);
}

int main()
{
    int sum = 0;
    int input;
    float number[10];
    float average=0.0;
    for (input=0; input<10; ++input)
    {
        printf("%d. Please input a number here: ", input+1);
        scanf("%f", &number[input]);
        sum += number[input];
    }
    average = sum/10;
    float standarddeviation = sd(number);
    
    printf("The average is: %.2f, The Srandard Deviation is: %.2f\n", average, standarddeviation);
    
    return 0;
}


