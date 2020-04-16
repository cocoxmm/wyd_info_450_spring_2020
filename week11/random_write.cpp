//
//  main.cpp
//  random_write
//
//  Created by Coco on 4/15/20.
//  Copyright © 2020 Coco. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    ofstream offile("randoms.txt");
    for (int i = 0; i < 1000; i++){
        int r = rand() % 20001 - 10000;
        offile << r << endl;
    }
}
