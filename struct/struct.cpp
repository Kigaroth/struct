// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

struct students {
    std::string name;
    std::string ID;
    int age;
};


int main()
{
    students s1, s2;
    s1.name = "Fredrik"; 
    s2.name = "Ali";

    s1.age = 25;
    s2.age = 19;

    if (s1.age > s2.age) {
        std::cout << s1.name << " is older than " << s2.name;
    }
    else {
        std::cout << s1.name << " is not older than " << s2.name;
    }

}
