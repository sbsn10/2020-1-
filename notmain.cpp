#include "notmain.h"
#include<string>
#include<regex>

using namespace std;

int Menu()
{
	cout << "1. ��ȭ��ȣ �߰�" << endl;
	cout << "2. ��ȭ��ȣ �˻�" << endl;
	cout << "3. ��ȭ��ȣ ����" << endl;
	cout << "4. ��ȭ��ȣ ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "�Է� -> ";
	
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
	regex pat{ R"((\d{3}-\d{4}-\d{4})|(\d{3}-\d{3}-\d{4}))" }; // -�� ��ȭ��ȣ �߰��� ����ִ� ��ȭ��ȣ ����.
	smatch matches;

		if (regex_search(number1, matches, pat))
		{
			number1 = matches[0];

			if (finumber(number1, pb) == -1)
			{
				return true;
			}

			cout << "�ߺ��Ǿ� ���Է� �ʿ�" << endl;
			return false;
		}
		else
		{
			cout << "000-0000-0000 ��ȣ �߰��� - �Է� �ʿ�" << endl;
			return false;
		}

}

void Phoneinput(vector<PN>& pb)
{
	string In_name;
	string number1;

	cout << "�̸�:";
	cin >> In_name;
	do
	{
		cout << "����ó:";
		cin >> number1;
	} while (!Ncheck(number1,pb));
	
	PN pn(In_name, number1);
	pb.push_back(pn);
}

void find(vector<PN>& pb)
{
	int menu_choice;
	cout << "1. ��ȭ��ȣ�� �˻�" << endl;
	cout << "2. �̸����� �˻�" << endl;
	cout << "�Է� -> ";
	cin >> menu_choice;
	
	int result;
	string name;
	string number;
	switch (menu_choice)
	{
		
		case 1:
		{
			cout << "��ȭ��ȣ -> ";
			cin >> number;
			result = finumber(number, pb);
				pb[result].
			}
			break;
		}
		case 2:
		{
			cout << "�̸� ->";
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
	
	string Cnumber;// �ٲ� ��ȭ��ȣ
	string Cname;// �ٲ� �̸�

	string target;// �ٲ� �̸�
	int choice;// ����� ��� ����

	cout << "������ �̸� �Է� -> ";
	cin >> target;
	

	if (target.size()==1)
	{
		cout << "�ٲ� �̸� -> ";
		cin >> Cname;
		
		do
		{
			cout << "�ٲ� ����ó -> ";
			cin >> Cnumber;
		} while (!Ncheck(Cnumber, pb));


		pb[target_list[0]].nameset(Cname);
		pb[target[0]].set_number(Cnumber);

		cout << "���� �Ϸ�" << endl;
	}
	else
	{
		for (int i = 0; i < target.size(); i++)
		{
			cout <<"--"<< i << "��--" << endl;
			pb[target[i]].datashow();
		}
		cout << "�� ��° �����͸� �����Ͻðڽ��ϴ�? ->";
		cin >> choice;

		cout << "�ٲ� �̸� ->:";
		cin >> Cname;

		do
		{
			cout << "�ٲ� ����ó ->";
			cin >> Cnumber;
		} while (!NCheck(Cnumber, pb));

		
		pb[target[choice]].numberset(Cnumber);

		cout << "������ ��� ǥ��" << endl;

		
	}
}




