#include <iostream>
#include <queue>
using namespace std;
class Stack {
public:
	queue <int> q1;
	queue <int> q2;
	int size;
	void push(int val)
	{
		q2.push(val);
		while (!q1.empty())
		{
			q2.push(q1.front());
			size++;
			q1.pop();
		}
		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
	}
	void pop()
	{
		q1.pop();
		size--;
	}
	int top()
	{
		return q1.front();
	}
	int size()
	{
		return size;
	}
};
int main(){

}
