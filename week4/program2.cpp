//
//  main.cpp
//  week4program2
//
//  Created by Coco on 2/12/20.
//  Copyright © 2020 Coco. All rights reserved.
//

#include <iostream>
#include <vector>
#include "string"


int main() {
    std::vector<std::string> name;//创建一个向量存储容器 string 类型的

    int enter = 0;
    std::string n = " ";

    std::cout << "Please enter student from index ";
    std::cout << enter;
    std::cout << ": ";
    while ( std::cin >> n) {
        std::cout << "Please enter student from index ";
        std::cout << enter+1;
        std::cout << ": ";
        name.push_back(n);
        enter = enter + 1;
        std::cin.get();
        if (std::cin.peek() == '\n')
            break;
    }

    for (int i = 0; i < name.size(); i++)     //size()容器中实际数据个数
    {
        std::cout << "name[" << i << "] = " << name[i];
        if (i != name.size() - 1)
            std::cout << "\n";
    }
    return 0;
}
