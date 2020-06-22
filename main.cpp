#include"notmain.h"
#include"PN.h"

using namespace std;

int main()
{
	vector<PN> PB;
	int choice;

	while (true)
	{
		choice = Menu();
		switch (choice)
		{
		case 1:
			Phoneinput(PB);
			break;
		case 2:
			find(PB);
			break;
		case 3:
			PChange(PB);
			break;
		case 4:
			list(PB);
			break;
		case 5:
			cout << "프로그램 " << endl;
			getchar();
			return 0;
		}
	}
}
