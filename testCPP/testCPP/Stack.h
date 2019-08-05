#ifndef STACK_H
#define STACK_H


typedef unsigned long  ulong;
class Stack
{
private:
	//static const int MAX = 10;可以用
	//const int MAX=10; 会报错 非静态成员需要有特定对象 可以用static
	enum {MAX=10};
	//items 存储unsigned long
	ulong items[MAX];
	int top;
public:
	Stack();
	bool isEmpty() const;
	bool isFull() const;
	bool push(const ulong& item);
	bool pop(ulong& item);
	

};

#endif STACK_H