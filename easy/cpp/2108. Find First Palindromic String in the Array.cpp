// Solution 1:
#include <string>

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const auto& w : words) {
           if (is_palindrome(w)) {
            return w;
           }
        }
        return {};
    }

    bool is_palindrome(const std::string& word) {
        const size_t w_length = word.size();
            for(size_t i = 0; i < w_length / 2; ++i) {
                if(word[i] != word[w_length - 1 - i]) {
                    return false;
                }
            }
        return true;
    }
};

/*
Solution 2:
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const auto& w : words) {
            std::string rw(w.size(), ' ');
            std::copy(w.rbegin(), w.rend(), rw.begin());
            if(rw == w) {
                return w;
            }
        }
    return std::string{};
    }
};
*/
