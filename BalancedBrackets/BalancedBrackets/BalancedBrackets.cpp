#include<iostream>
#include<stack>
using namespace std;

bool balancedBrackets(string s)
{
	stack <char> mystack;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			mystack.push(s[i]);
		}
		else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
		{
			if (mystack.top() == '(' && s[i] == ')')
			{
				mystack.pop();
			}
			else if (mystack.top() == '{' && s[i] == '}')
			{
				mystack.pop();
			}
			else if (mystack.top() == '[' && s[i] == ']')
			{
				mystack.pop();
			}
			else return false;
		}
	}
	return true;
}
int main()
{
	string x;
	cout << "enter a bracket string...";
	cin >> x;
	cout << balancedBrackets(x);
}