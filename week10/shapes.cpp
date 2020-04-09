//
//  main.cpp
//  shape
//
//  Created by Coco on 4/8/20.
//  Copyright © 2020 Coco. All rights reserved.
//

#include <iostream>
using namespace std;

const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
    int get_perimeter_length() { return -1; }
    
    int get_area() { return -1; }
};

class circle : public shape{
  public:
    int r;
    circle(int radius){
        r = radius;
    }
    
    int get_perimeter_length() { return PI * r * 2; }
    
    int get_area() { return PI * r * r; }
};

class rectangle : public shape{
  public:
    int h;
    int w;
    
    rectangle(int height, int width){
        h = height;
        w = width;
    }
    
    int get_perimeter_length() { return (h + w) * 2; }
    
    int get_area(){ return h * w; }
};

class square : public shape{
  public:
    int s;
    square(int side) {
        s = side;
    }
    
    int get_perimeter_length() { return s * 4; }
    int get_area(){ return s * s; }
};

int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
    cout << "Perimeter: " << c.get_perimeter_length() << " : Area " << c.get_area() << endl;
  square s(3);
  s1 = &s;
    cout << "Perimeter: " << s.get_perimeter_length() << " : Area " << s.get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
    cout << "Perimeter: " << r.get_perimeter_length() << " : Area " << r.get_area() << endl;
  return 0;
}
