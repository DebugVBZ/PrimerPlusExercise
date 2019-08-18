#ifndef  STUDENTC_H
#define STUDENTC_H

#include<iostream>
#include<valarray>
#include<string>

using namespace std;

class Student
{
private:
	typedef  valarray<double> ArrayDb;
	string name;    //contained object;
	ArrayDb scores;  //contained object;
	//private method for scores output
	ostream& arr_out(ostream& os) const;

public:
	//使用初始化列表为成员中的类数据初始化
	Student() :name("Null"), scores() {};
	Student(const string & s) :name(s), scores() {};
	//explicit 避免了构造函数对int的隐式转化
	//没有explicit可以实现单参数的赋值操作 比如 student temp=5
	//开启explicit之后则 关闭了隐式转化 赋值操作变成非法
	explicit Student(int n) :name("Null"), scores(n) {};
	Student(const string & s, int n) :name(s), scores(n) {};
	Student(const string & s, const ArrayDb& Db) :name(s), scores(Db) {};
	Student(const char* str, const double* pd,int n) :name(str), scores(pd,n) {};
	~Student() {};
	double Average()const;
	const string& Name()const;
	double& operator[](int i);
	double operator[](int i)const;

	//friends
		//input
	friend istream& operator >> (istream& is, Student& stu);
	friend istream& getline(istream& is, Student& stu);

		//output
	friend ostream& operator<<(ostream& os, const Student &stu);

};

#endif // ! STUDENTC_H
