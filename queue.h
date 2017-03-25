#include <iostream>
template <class T>
class queue
{
private:
	T *newqueue;
	int size;
	int top;
	int bot;
	int scr;
public:
	queue(int);
	~queue();
	void push(T);
	void pop();
	void print();
};
template <class T>
queue<T>::queue(int maxSize) :
size(maxSize)
{
	newqueue = new T[size];
	top = bot = 0;
}
template <class T>
queue<T>::~queue()
{
	delete[] newqueue;
}
template <class T>
void queue<T>::push(T value)
{
	if (top < size)
		newqueue[top++] = value;
	scr = top;
}
template <class T>
void queue<T>::pop()
{
	if (scr > 0)
	{
		cout << "\nDelete element\n";
		newqueue[bot++];
		scr--;
	}
}
template <class T>
void queue<T>::print()
{
	cout << "Size of queue=" << scr << "\n";
	if (scr == 0)
	{
		cout << "Queue empty\n";
	}
	for (int n = bot; n < top; n++)
		cout << newqueue[n] << " ";
}
