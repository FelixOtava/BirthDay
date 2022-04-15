#pragma once
#include "B_Day.h"
#include <chrono>
class Persoana
{
public: 
	Persoana(std::string name, std::string middleName, B_Day *test);
	~Persoana();
	void howOldAmI();
private:
	std::string m_name;
	std::string m_middleName;
	B_Day* m_birthday;
};

