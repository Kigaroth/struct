// struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


struct employee {
	std::string name;
	std::string surname;
	int age;
	int wage;
};

int main() {

	employee e1, e2;

	std::cout << " Please type your name: ";
	std::cin >> e1.name;

	std::cout << "\n Thank you. \n Please type your surname: ";
	std::cin >> e1.surname;
	
	std::cout << "\n Thank you. \n Please enter your age: ";
	std::cin >> e1.age;
	
	std::cout << "\n Thank you. \n Please enter your wage: ";
	std::cin >> e1.wage;

	system("CLS");

	std::cout << "\n Thank you. Here is what you submitted:";
	std::cout << "\n Your full name is: " << e1.name << " " << e1.surname;
	std::cout << "\n Your age is: " << e1.age;
	std::cout << "\n Your wage is: " << e1.wage;

	if (e1.wage > 10000) {
		std::cout << "\n\n Wow! You make a lot of money!";
	}
	else {
		std::cout << "\n\n You make a decent wage";
	}


}

//
//struct students {
//    std::string name;
//    std::string ID;
//    int age;
//};
//
//
//int main()
//{
//    students s1, s2;
//    s1.name = "Fredrik"; 
//    s2.name = "Ali";
//
//    s1.age = 25;
//    s2.age = 19;
//
//    if (s1.age > s2.age) {
//        std::cout << s1.name << " is older than " << s2.name;
//    }
//    else {
//        std::cout << s1.name << " is not older than " << s2.name;
//    }
//
//}
