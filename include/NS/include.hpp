#pragma once
// describe common functionality

#include <iostream>
#include <vector>

using String = std::string;

// compare string to multiple strings
bool cmpstrs(String strToCmp, std::vector<String> cmps) {
    bool rtVal=false;
    int i=0;
    while (i<cmps.size() && rtVal == false) {
        if (strToCmp == cmps[i]) {
            rtVal=true;
        }
        i++;
    }
    return rtVal;
}
