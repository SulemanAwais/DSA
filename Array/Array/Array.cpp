#include<iostream>
using namespace std;
int linearSearch(int key, int* arr,int size)
{
	for (int i = 0;i <= size;i++)
	{
		if (arr[i] == key)
		{
			cout << i;
			return i;
		}
	}
	cout << -1;
	return -1;
}
void makeAnArray(int size, int* arr)
{
	for (int i = 0;i < size;i++)
	{
		cin>>arr[i];
	}
}
void displayAnArray(int* arr, int size)
{
	for (int i = 0;i < size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int* selectionSort(int* arr, int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
	return arr;
}
void bubbleSort(int* arr, int size)
{
	int counter=0;
	while (counter < size)
	{
		for (int i = 0;i < counter ; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter++;
	}
}
int main()
{
	int size;
	cout << "enter size of array";
	cin >> size;
	int* arr=new int[size];
	makeAnArray(size, arr);
	//linearSearch(2, arr,size);
	bubbleSort(arr, size);
	displayAnArray(arr, size);

}