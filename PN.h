#pragma once
#include<iostream>
#include<string>

class PN
{
public:
	PN(std::string name1, std::string number1);
	//~PN();
	std::string nameget();
	std::string numberget();
	void nameset(std::string name1);
	void numberset(std::string number1);
	void output();
protected:
	std::string name;
	std::string number;
};
