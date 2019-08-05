#pragma once
#include<iostream>
#include"Sales.h"
using namespace std;
//using namespace SALES;
//
//void SALES::setSales(Sales& s, const double ar[], int n)

void SALES::setSales(Sales& s, const double ar[], int n)
{
	double sum=0.0;
	s.max = s.min = ar[0];
	int num = n;
	for (int i = 0; i < QUATERS; i++)
	{
		if (num == 0)
			s.sales[i] = 0;
		else
		{
			s.sales[i] = ar[i];
			sum += ar[i];
			if (ar[i] > s.max)
				s.max = ar[i];
			if (ar[i] < s.min)
				s.min = ar[i];
		}
		num--;
	}
	s.average = sum/n;
}

void SALES::showSales(Sales& s)
{
	cout << "Sales Information display\n ";
	cout << "Average: " << s.average << endl;
	cout << "Max: " << s.max << endl;
	cout << "Min: " << s.min << endl;
	cout << "Done.\n";
}
