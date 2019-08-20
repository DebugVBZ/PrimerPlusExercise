#pragma once
#ifndef QUEUETP_H
#define QUEUETP_H

template<typename Item>
class QueueTP
{
private:
	enum{Q_SIZE=10};
	//nested class defination
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item& i) :item(i), next(nullptr) {};

	};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTP(const QueueTP& q) :qsize(0) {};
	QueueTP& operator=(const QueueTP&q) { return *this };
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isEmpty()const
	{
		return items == 0;
	}
	bool isFull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& it);
	bool dequeue(Item &item);
};

template<typename Item>
QueueTP<Item>::QueueTP(int qs) :qsize(qs)//initialize const member
{
	front = rear = nullptr;
	items = NULL;

}
template<typename Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<typename Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isFull)
		return false;
	Node* add = new Node(item);
	if (add == NULL)
		return false;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

template<typename Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == NULL)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
#endif //QUEUETP_H