//
//  main.cpp
//  Sort_withNoIf
//
//  Created by Andrey on 01.11.15.
//  Copyright © 2015 Andrey. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

constexpr unsigned int value_range()
{
    return 10;
}

constexpr unsigned int count_range()
{
    return 12;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int* arr = new int[count_range()];
    
    /* initialize random seed: */
    srand(static_cast<unsigned int>(time(nullptr)));
    
    for (auto i=0; i<count_range(); ++i) {
        arr[i] = rand() % value_range();
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
    
    unsigned int cnt_arr[value_range()] = {};
    
    for (auto i=0; i<count_range(); ++i) {
        auto value = arr[i];
        ++cnt_arr[value];
    }
    
    for (auto i=0; i<value_range(); ++i) {
        for (auto j=0; j<cnt_arr[i]; ++j) {
            std::cout << i << ", ";
        }
    }
    
    return 0;
}
