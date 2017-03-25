#include <iostream>
#include "queue.h"
using namespace std;
int main()
{
	int siz;
	siz = 0;
	cout << "Enter size of queue ";
	cin >> siz;
	queue<char> Myqueue(siz);
	int x = 0;
	char y;
	while (x++ < siz)
	{
		cin >> y;
		Myqueue.push(y);
	}
	cout << endl;
	while (x-- >= 1){
		Myqueue.print();
		Myqueue.pop();
	}
	return 0;
}