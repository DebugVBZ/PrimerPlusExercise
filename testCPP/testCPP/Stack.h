#ifndef STACK_H
#define STACK_H


typedef unsigned long  ulong;
class Stack
{
private:
	//static const int MAX = 10;������
	//const int MAX=10; �ᱨ�� �Ǿ�̬��Ա��Ҫ���ض����� ������static
	enum {MAX=10};
	//items �洢unsigned long
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