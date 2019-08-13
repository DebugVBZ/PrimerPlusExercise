#include<iostream>
#include"StudentI.h"

double StudentI::Average() const
{
	if (DbArray::size() > 0)
		return DbArray::sum() / DbArray::size();
	else return 0.0;

}
ostream& StudentI::arr_out(ostream& os) const
{
	int lim = DbArray::size();
	if (lim == 0)
		os << "No scores stored";
	else
	{
		for (int i = 0; i < lim; i++)
		{
			//调用基类重载后的[]操作符
			os << DbArray::operator[](i) << " ";
			if (i % 5 == 0)
				os<< endl;
		}
	}
	return os;
}
const string& StudentI::Name() const
{
	return (const string&)*this;
}
double& StudentI::operator[](int i)
{
	return DbArray::operator[](i);
}
double StudentI::operator[](int i) const
{
	return DbArray::operator[](i);
}
//friends
istream& operator>>(istream& is, StudentI& stu)
{
	is >> (string&)stu;
	return is;
}
istream& getline(istream& is, StudentI& stu)
{
	getline(is, (string&)stu);
	return is;
}
ostream& operator<<(ostream& os, StudentI& stu)
{
	os << (string&)stu << endl;
	stu.arr_out(os);
	return os;
}