#include"Studentc.h"
#include<iostream>
using namespace std;

double Student::Average()const
{
	if (scores.size > 0)
		return scores.sum() / scores.size();
	else
		return 0;
}
const string& Student::Name() const
{
	return name;
}
double& Student::operator[](int i)
{
	return scores[i];
}
double Student::operator[](int i) const
{
	return scores[i];
}
ostream& Student::arr_out(ostream& os) const
{
	int lim = scores.size();
	if (lim == 0)
		os << "No scores stored";
	else
	{
		for (int i = 0; i < lim; i++)
		{
			//调用基类重载后的[]操作符
			os << scores[i] << " ";
			if (i % 5 == 0)
				os << endl;
		}
	}
	return os;
}
//friends
istream& operator >> (istream& is, Student& stu)
{
	is >> stu.name;
	return is;
}
istream& getline(istream& is, Student& stu)
{
	getline(is, stu.name);
	return is;
}
ostream& operator <<(ostream& os, const Student &stu)
{
	os << stu.name << endl;
	stu.arr_out(os);
	return os;
}