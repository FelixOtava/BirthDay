#pragma once
#include<iostream>
#include<string>


class B_Day
{
public:
	B_Day(int zi, std::string luna, int an);
	~B_Day();
	void getB_Day();
	int getYear();
	int getDay();
	int convertMonth();
private:
	int m_year;
	std::string m_month;
	int m_day;
};

