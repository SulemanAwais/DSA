#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
	//base case
	if (n < 10) return n;
	//recursive case
	else if (n > 10) return n % 10 + sumOfDigits(n / 10);
}
int main()
{
	cout << "number is 123\nand sum of the digits is\n"<<sumOfDigits(123);

}