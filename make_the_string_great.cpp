#include <string>
#include <cctype>
#include <iostream>
class Solution {

public:

    std::string makeGood(std::string s) {
        int prev_size = 0;
        int cur_size = s.size();
        while (prev_size != cur_size) {
            for (int i = 0; i <= s.size() - 2; i++) {
                if (isupper(s[i + 1])) {
                    if (tolower(s[i]) == tolower(s[i + 1])) {
                        s.erase(i, 2);
                    }
                }
            }   
            prev_size = cur_size;
            cur_size = s.size();
        }
        return s;
    }
};

int main() {
    std::string str = "abBAcC";

    Solution solution;
    


}