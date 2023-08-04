#include <iostream>
#include <string>

bool isPalindrome(int x) {
    std::string num = std::to_string(x);
    unsigned int length = num.size();
    std::cout << num;
    for(int i = 0; i < length; ++i) {
        if(num.at(i) != num.at((length -1) - i)) {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout << std::boolalpha << isPalindrome(424);
}
