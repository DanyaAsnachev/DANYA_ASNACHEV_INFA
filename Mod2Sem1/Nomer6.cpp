#include <cstdio>
#include <iostream>

namespace mipt 
{
    struct Book 
    {
        char title[100];
        int pages;
        float price;
    };



    void isExpensive(const Book& b)
    {
        bool x = true;
        bool y = false;
        if (b.price > 1000)
             std::cout << x << "\n";
        if (b.price <= 1000)
             std::cout << y << "\n";
    }
}


int main() 
{
    mipt::Book b = {"War and Peace", 1200, 900};
    mipt::isExpensive(b);
}