#pragma once
#ifndef TEMPMEMB_H
#define TEMPMEMB_H

#include<iostream>
using namespace std;

template<typename T>
class Beta
{
private:
	template<typename V>
	class Hold
	{
	private:
		V val;
	public:
		Hold(V v = 0) :val(v) {};
		void show()const { cout << val << endl; };
		V value() const { return val };
	};
	Hold<T> q;
	Hold<int> n;
public:
	Beta(T t, int i) :q(t), n(i) {};
	template<typename U>
	U blab(U u, T t) { return n.val() + q.value()*u / t; };
	void Show() const { q.show(); n.show(); }
};
#endif // !TEMPMEMB_H

