#ifndef STUDENTI_H
#define STUDENTI_H

#include<iostream>
#include<valarray>
#include<string>

using namespace std;

class StudentI : private string, private valarray<double>
{
private:
	typedef valarray<double> DbArray;
	ostream& arr_out(ostream& os) const;
public:
	StudentI() :string("Null"), DbArray() {};
	StudentI(const string& s) :string(s), DbArray() {};
	explicit StudentI(int n) :string("Null"), DbArray() {};
	StudentI(const string& s, int n) :string(s), DbArray(n) {};
	StudentI(const string& s, const DbArray& db) :string(s), DbArray(db) {};
	StudentI(const char* str, const double* pd, int n) :string(str), DbArray(pd, n);
	~StudentI() {};
	double Average()const;
	const string& Name() const;
	double& operator[](int i);
	double operator[](int i) const;

	//friends
	friend istream& operator>>(istream& is, StudentI& stu);
	friend istream& getline(istream& is, StudentI& stu);

	friend ostream& operator<<(ostream& os, StudentI& stu);
};
#endif // !STUDENTI_H
