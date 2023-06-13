#include<iostream>
#include<stack>
using namespace std;
//void reverseAString(string s)
//{
//
//	stack<string> myStack;
//	for (int i = 0;i < s.length();i++)
//	{
//		string word = "";
//		while (s[i] != ' ')
//		{
//			word+=s[i];
//			i++;
//		}
//		myStack.push(word);
//	}
//	while(!myStack.empty())
//	{
//		cout << myStack.top()<<"\t";
//		myStack.pop();
//	}
//}
bool balanceParanthesis(string s)
{
	stack<char> myStack;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '( ' || s[i] == '{ ' || s[i] == '[ ')
		{
			myStack.push(s[i]);
		}
		else if (s[i] == ') ')
		{
			if (myStack.top() == ')')
			{
				myStack.pop();
			}
			else
			{
				return false;
				break;
			}
		}
		else if (s[i] == '}')
		{
			if (myStack.top() == '}')
			{
				myStack.pop();
			}
			else
			{
				return false;
				break;
			}

		}
		else if (s[i] == ']')
		{
			if (myStack.top() == ']')
			{
				myStack.pop();
			}
			else
			{
				return false;
				break;
			}

		}
	}
	return true;	
}
int main()
{
	string s = " hey, how are you?";
	//reverseAString(s);
	string parantheisis = "{([}])}";
	cout<<endl<<balanceParanthesis(parantheisis);
}