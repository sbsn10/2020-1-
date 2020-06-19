#include "notmain.h"
#include<string>
#include<regex>

using namespace std;

int Menu()
{
	cout << "1. 전화번호 추가" << endl;
	cout << "2. 전화번호 검색" << endl;
	cout << "3. 전화번호 수정" << endl;
	cout << "4. 전화번호 목록" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "입력 -> ";
	
	int enter;
	cin >> enter;
	return enter;
}

void list(std::vector<PN>& pb)
{
	for (int i = 0; i < pb.size(); i++)
	{
		pb[i].datashow();
	}
}


int finumber(string number1, vector<PN>& pb)
{
	for (int i = 0; i < pb.size(); i++)
	{
		if (pb[i].getter_number() == number1)
			return i;
	}
	return -1;
}

bool Ncheck(string& number1, vector<PN>& pb)
{
	regex pat{ R"((\d{3}-\d{4}-\d{4})|(\d{3}-\d{3}-\d{4}))" }; // -가 전화번호 중간에 들어있는 전화번호 문자.
	smatch matches;

		if (regex_search(number1, matches, pat))
		{
			number1 = matches[0];

			if (finumber(number1, pb) == -1)
			{
				return true;
			}

			cout << "중복되어 재입력 필요" << endl;
			return false;
		}
		else
		{
			cout << "000-0000-0000 번호 중간에 - 입력 필요" << endl;
			return false;
		}

}

void Phoneinput(vector<PN>& pb)
{
	string In_name;
	string number1;

	cout << "이름:";
	cin >> In_name;
	do
	{
		cout << "연락처:";
		cin >> number1;
	} while (!Ncheck(number1,pb));
	
	PN pn(In_name, number1);
	pb.push_back(pn);
}

void find(vector<PN>& pb)
{
	int menu_choice;
	cout << "1. 전화번호로 검색" << endl;
	cout << "2. 이름으로 검색" << endl;
	cout << "입력 -> ";
	cin >> menu_choice;
	
	int result;
	string name;
	string number;
	switch (menu_choice)
	{
		
		case 1:
		{
			cout << "전화번호 -> ";
			cin >> number;
			result = finumber(number, pb);
				pb[result].
			}
			break;
		}
		case 2:
		{
			cout << "이름 ->";
			cin >> name;
			
				for (int i = 0; i < temp.size(); i++)
				{
					pb[temp[i]].datashow();
				}
			
			break;
		}
			
	}
}

void PChange(vector<PN>& pb)
{
	
	string Cnumber;// 바꿀 전화번호
	string Cname;// 바꿀 이름

	string target;// 바꿀 이름
	int choice;// 사용자 대상 선택

	cout << "수정할 이름 입력 -> ";
	cin >> target;
	

	if (target.size()==1)
	{
		cout << "바꿀 이름 -> ";
		cin >> Cname;
		
		do
		{
			cout << "바꿀 연락처 -> ";
			cin >> Cnumber;
		} while (!Ncheck(Cnumber, pb));


		pb[target_list[0]].nameset(Cname);
		pb[target[0]].set_number(Cnumber);

		cout << "변경 완료" << endl;
	}
	else
	{
		for (int i = 0; i < target.size(); i++)
		{
			cout <<"--"<< i << "번--" << endl;
			pb[target[i]].datashow();
		}
		cout << "몇 번째 데이터를 수정하시겠습니다? ->";
		cin >> choice;

		cout << "바꿀 이름 ->:";
		cin >> Cname;

		do
		{
			cout << "바꿀 연락처 ->";
			cin >> Cnumber;
		} while (!NCheck(Cnumber, pb));

		
		pb[target[choice]].numberset(Cnumber);

		cout << "수정된 결과 표시" << endl;

		
	}
}




