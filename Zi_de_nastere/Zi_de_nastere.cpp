#include <iostream>
#include <string>
#include "B_Day.h"
#include "Persoana.h"


Persoana* createPersoana() {
	std::cout << "Enter a Name and a MiddleName separated by spacebar: \n";
	std::string name, middleName, month;
	int day, year;
	std::cin>> name;
	std::cin.ignore();
	std::cin>> middleName;
	std::cin.ignore();
	std::cout << "Enter the birthday in this format: Day / Month / Year , using digits for day and year, and words for month (ex: May)\n";
	std::cin >> day;
	std::cin.ignore();
	std::cin >> month;;
	std::cin.ignore();
	std::cin >> year;
	B_Day *birthDay= new B_Day(day, month, year);
	Persoana* s = new Persoana(name, middleName, birthDay);
	return s;
}



int main()
{
	Persoana* test = createPersoana();
	test->howOldAmI();
	delete test;
	
}


