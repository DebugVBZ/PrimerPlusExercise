#include<iostream>
using namespace std;
const short strsize = 20;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
bop* init()
{
	bop* bopArr = new bop[4];
	bopArr[0] =
	{
		"Jake",
		"Junior",
		"Bop1",
		1
	};
	bopArr[1] =
	{
		"Jame",
		"Junior",
		"Bop2",
		2
	};
	bopArr[2] =
	{
		"Bob",
		"Senior",
		"Bop3",
		3
	};
	bopArr[3] =
	{
		"Cube",
		"Senior",
		"Bop2",
		2
	};

	return bopArr;
}
void processArr(char num, bop* bopArr)
{
	switch (num)
	{
	case('a'):
		for (int i = 0; i < 4; i++)
		{
			cout << bopArr[i].fullname << endl;
		}
		break;
	case('b'):
		for (int i = 0; i < 4; i++)
		{
			cout << bopArr[i].title << endl;
		}
		break;
	case('c'):
		for (int i = 0; i < 4; i++)
		{
			cout << bopArr[i].fullname << endl;
		}
		break;
	case('d'):
		for (int i = 0; i < 4; i++)
		{
			switch (bopArr[i].preference) {
			case(1):
				cout << bopArr[i].fullname << endl;;
				break;
			case(2):
				cout << bopArr[i].title<<endl;
				break;
			case(3):
				cout << bopArr[i].bopname<<endl;
				break;
			default:
				
				break;
			}
		}
	default:
		break;
	}
}

int main()
{
	bop *bArr = init();
	//cout << sizeof bArr;
	cout << "BOP number president\n";
	cout << "a.display by name\n";
	cout << "b.display by title\n";
	cout << "c.display by bopname\n";
	cout << "d.display by preference\n";
	cout << "q.quit\n";
	bool terminate = true;
	while (terminate)
	{
		cout << "please enter number to display information\n"
			<< "or press Q to terminate\n";
		char num;
		cin >> num;
		if (num == 'q')
			terminate = false;
		else
		{
			processArr(num, bArr);
		}
		cout << "End,but you can still enter number to look up informations\n";
	}
	//cout << (int)'A';
	cout << "done" << endl;
	cout << (char)96 << endl;
	system("pause");
	return 0;
}