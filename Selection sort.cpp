#include <iostream>
using namespace std;
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
