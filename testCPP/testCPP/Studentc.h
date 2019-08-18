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
	//ʹ�ó�ʼ���б�Ϊ��Ա�е������ݳ�ʼ��
	Student() :name("Null"), scores() {};
	Student(const string & s) :name(s), scores() {};
	//explicit �����˹��캯����int����ʽת��
	//û��explicit����ʵ�ֵ������ĸ�ֵ���� ���� student temp=5
	//����explicit֮���� �ر�����ʽת�� ��ֵ������ɷǷ�
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
