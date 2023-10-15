#include <iostream>
#include <unordered_map>
using namespace std;
void sort(string s)
{
	unordered_map <char, int> m;
	for (char c : s)
	{
		m[c]++;
	}
}