#include <cstdio>
#include <iostream>

namespace myspace
{
    struct Name
    {
        const char* str;
        int n;      
    };
    void printNTimes(const char* str, int n)
    {
        for (int i = 0; i < n; ++i)
            std::cout << str << "\n";
    }
}


int main() 
{
    myspace::Name b = {"War and Peace", 10};
    myspace::printNTimes(b.str, b.n);
}