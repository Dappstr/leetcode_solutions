#include <iostream>
#include <string>

int romanToInt(std::string s) {
    int num = 0;
    int prev = 0;
    for(int i = 0; i < s.length(); ++i) {
        int current;
        switch(s.at(i)) {
            case 'I':
               current = 1;
                break;
            case 'V':
                current = 5;
                break;
            case 'X':
                current = 10;
                break;
            case 'L':
                current = 50;
                break;
            case 'C':
                current = 100;
                break;
            case 'D':
                current = 500;
                break;
            case 'M':
                current = 1000;
                break;
        }
        if(prev < current) {
            num += current - 2 * prev;
        }
        else {
            num += current;
        }
        prev = current;
    }

    return num;
}
