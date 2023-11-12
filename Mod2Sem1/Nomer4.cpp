#include <cstdio>
#include <iostream>
#include <ctype.h>

namespace myspace
{
    struct Name
    {
        const char* str;
        int numLetters = 0;
        int numDigits = 0;
        int numOthers = 0;      
    };
    void countLetters(const char* str, int& numLetters, int& numDigits, int& numOthers)
    {
        for (int i = 0; i < str[i] != '\0'; ++i)
        {
            if (((90 >= str[i]) && ( str[i] >= 65)) || (122 >= str[i]) && (str[i] >= 97))
                numLetters += 1;
            else if (((57 >= str[i]) && ( str[i] >= 48)))
                numDigits += 1;
            else
                numOthers += 1;
        }
         std::cout << numLetters << "\n" << numDigits << "\n" << numOthers << "\n";
    }
}


int main() 
{
    myspace::Name b = {"fbvbdfvkdfsvba ...... 21312321"};
    myspace::countLetters(b.str, b.numLetters, b.numDigits, b.numOthers);
}