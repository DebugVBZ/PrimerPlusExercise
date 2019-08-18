//arraytp.h --ArrayTemplate
//使用模板参数来提供常规数组的大小
#ifndef  ARRAYTP_H
#define ARRAYTP_H

#include<iostream>
#include<cstdlib>
//声明ArrayTP<double<12> testArr;
//优点是内存分配在new和delete管理的堆内存而非自动变量内存栈
//缺点是每个大小的数组都要声称自己的模板
template<typename T,int n>
class ArrayTP
{
private:
	T ar[n];
public:
	ArrayTP() {};
	explicit ArrayTP(const T& v);
	virtual T& operator[](int i);
	virtual T operator[](int i) const;

};

template <typename T,int n>
ArrayTP<T, n>::ArrayTP(const T& v)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}
template<typename T,int n>
T& ArrayTP<T, n>::operator[](int i)
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits, " << i
			<< " is out of range!\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];


}
template<typename T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits, " << i
			<< " is out of range!\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];


}

#endif // ! ARRAYTP_H
