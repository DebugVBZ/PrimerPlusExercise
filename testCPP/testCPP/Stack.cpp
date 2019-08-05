#include"Stack.h"

Stack::Stack()
{
	top = 0;
}
bool Stack::isEmpty() const 
{
	return top == 0;
}
bool Stack::isFull() const
{
	return  top == MAX;
}

bool Stack::push(const ulong& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else return false;
		
}
bool Stack::pop(ulong& item)
{
	if (top > 0)
	{
		item = items[top--];
		return true;
	}
	else return false;
}