#include "58LengthOfLastWord.h"

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        std::vector<std::string> words;
        char *token1;
        char *currentValue = currentValue = strtok_s(const_cast<char *>(s.c_str()), " ", &token1);
        while (currentValue != nullptr)
        {
            words.push_back(static_cast<std::string>(currentValue));
            currentValue = strtok_s(nullptr, " ", &token1);
        }
        return words.back().length();
    }
};

int main(int argc, char **argv)
{
    auto s = Solution();
    std::cout << s.lengthOfLastWord("Hello world") << std::endl;
    std::cout << s.lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    std::cout << s.lengthOfLastWord("luffy is still joyboy") << std::endl;
}

