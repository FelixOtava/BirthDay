#include "Persoana.h"

Persoana::Persoana(std::string name, std::string middleName, B_Day *test):
	m_name(name),m_middleName(middleName), m_birthday(test)
{}
Persoana :: ~Persoana(){
	delete m_birthday;
	std::cout << "A person was deleted\n";

}
void Persoana::howOldAmI() {
	if (m_birthday == NULL) {
		std::cout << "I have no birthday\n";
		return;
	}

	int year, month, day;
	year = m_birthday->getYear();
	day = m_birthday->getDay();
	month = m_birthday->convertMonth();
	struct tm date = { 0 };
	date.tm_year = year - 1900;
	date.tm_mon = month - 1;
	date.tm_mday = day;
	time_t normal = mktime(&date);
	time_t current;
	time(&current);
	long secundeInZi = 86400;
	int age = (difftime(current, normal) + secundeInZi / 2) / secundeInZi;
	int zileInAn = 365;
	std::cout << "Eeei, "<<m_name<<" "<<m_middleName<<" you are " << age /zileInAn << " years old.\n";
	
}