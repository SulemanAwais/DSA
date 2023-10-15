#include<iostream>
using namespace std;
class Singelton {
private:
	Singelton()
	{
		cout<<"constructor ";
	}
	static Singelton* instance;

public:
	static Singelton* getInsance()
	{
		if (instance == nullptr)
		{
			instance = new Singelton();
		}
		return instance ;
	}
	void msg()
	{
		cout << "hellp";
	}


};
Singelton* Singelton::instance = nullptr;
int main()
{
	Singelton* ptr = Singelton::getInsance();
	ptr->msg();
	cout << ptr<<endl;
	Singelton* ptr1 = Singelton::getInsance();
	ptr1->msg();
	cout << ptr1;
}
