#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	const int max = 5;
	double fish[max];
	double golf[max];
	ofstream outFile;
	outFile.open("test.txt");
	cout << "please enter the scores.\n";
	cout << "you must enter " << max << "rounds\n";
	int i;
	for (int i = 0; i < max; i++)
	{
		cout << "round#" << i+1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number: ";
			
		}
		outFile << "Round#" << i << ": " << golf[i] << endl;
	}
	double total = 0;
	for (int j = 0; j < max; j++)
	{
		total += golf[j];
	}
	cout << "Average: " << total / max << endl;
	outFile << "Average: " << total / max << endl;
	cout << "done";
	outFile.close();
	//read the file;
	ifstream inFile;
	cout << "\nfile read\n";
	inFile.open("test.txt");
	char *line = new char[20];
	while (!(inFile.eof()))
	{
		inFile.getline(line, 19);
		cout << line<<endl;
	}
	delete[]line;
	inFile.close();
	system("pause");
	return 0;
}