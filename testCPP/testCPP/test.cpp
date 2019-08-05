#include<iostream>
#include<cctype>

#include"Stack.h"
using namespace std;

int main()
{
	Stack st;
	char ch;
	ulong po;
	cout << "Please enter A to add a purchase order.\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch&&toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'A':
		case'a':
			cout << "Enter a PO number to add: ";
			cin >> po;
			if (st.isFull())
				cout << "Stack is already full\n";
			else
				st.push(po);
			break;
		case'p':
		case'P':
			if (st.isEmpty())
				cout << "Stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO#" << po << " poped\n";
			}
			break;
		default:
			break;
		}
		cout << "Please enter A to add a purchase order.\n"
			<< "P to process a PO, or Q to quit.\n";
	}

	system("pause");
	return 0;
}