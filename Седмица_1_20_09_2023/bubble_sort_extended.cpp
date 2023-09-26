// Оптимизирана версия на метода на мехурчето
#include <iostream>
using namespace std;

// Функция за сортиране
void bubbleSort(int arr[], int n)
{
	int i, j, tmp;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
				swapped = true;
			}
		}

		// Ако нямаме размяна на елементи, то прекъсваме цикъла
		if (swapped == false)
			break;
	}
}

// Функция за принтиране на масива
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]); // Проверяваме броя на елементите на масива
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
