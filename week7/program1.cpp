//
//  main.cpp
//  week7program1
//
//  Created by Coco on 3/3/20.
//  Copyright © 2020 Coco. All rights reserved.
//


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
typedef vector<string>::const_iterator c_iter;


int main() {
    vector<string> sv;
    string s;
    cout << "Please enter the string you want to reverse: " << endl;
    
    while(true){
        getline(cin, s);
        if(s.empty()){
            sv.push_back(s);
            continue;
        }
        if(*(s.end()-1) == '!'){
            s.erase(s.end());
            reverse(s.begin(), s.end());
            sv.push_back(s);
            break;
        }
        reverse(s.begin(), s.end());
        sv.push_back(s);
    }
    reverse(s.begin(), s.end());
    for(c_iter it = sv.begin(); it != sv.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}

