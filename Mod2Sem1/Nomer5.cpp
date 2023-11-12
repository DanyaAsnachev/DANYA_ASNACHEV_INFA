#include <cstdio>
#include <iostream>

namespace mipt 
{
    struct Book 
    {
        char title[100];
        int pages;
        float price;
        float x;
    };



    void addPrise(Book& b)
    {
        b.price += b.x;
        std::cout << b.price << "\n";
    }
}


int main() 
{
    mipt::Book b = {"War and Peace", 1200, 900, 100};
    mipt::addPrise(b);
}