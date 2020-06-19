#include "PN.h"
using namespace std;

PN::PN(string name1,string number1)
{
	name = name1;
	number = number1;
}

//PN::~PN()
//{
//	cout << name << "의 주소가 삭제됩니다" << endl;
//}

std::string PN::nameget()
{
	return name;
}

std::string PN::numberget()
{
	return number;
}

void PN::nameset(string name1)
{
	name = name1;
}

void PN::numberset(string number1)
{
	number = number1;
}

void PN::output()
{
	cout << "***************" << endl;
	cout << "| 이름 :" << name << endl;
	cout << "| 전화번호 :" << number << endl;;
	cout << "***************" << endl;
}
