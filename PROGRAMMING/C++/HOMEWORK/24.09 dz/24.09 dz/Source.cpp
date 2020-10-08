#include <iostream>
#include <time.h>
using namespace std;
void fillArr(int* arr, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 51;
	}
}
void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printMenu(int &input) {
	cout << "==========================================" << endl;
	cout << "\t\tMENU" << endl;
	cout << "1. Print massive" << endl;
	cout << "2. Append massive at 1 element in end" << endl;
	cout << "3. Delete element in massive" << endl;
	cout << "4. Delete element in your input position" << endl;
	cout << "5. Append massive with index 0" << endl;
	cout << "6. Exit" << endl;
	cout << "==========================================" << endl;
	cout << "\t          ";
	cin >> input;

}
void addArrElement(int *& arr,int *& arr2,int &size,int element) {
	delete[]arr2;
	arr2 = new int[size];
	arr2[size] = element;
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	delete[]arr;
	arr = arr2;
	size++;
}
void deleteArrElement(int *&arr,int &size) {
	int *arr2 = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		arr2[i] = arr[i];
	}
	delete[]arr;
	arr = new int[size-1];
	arr = arr2;
	size--;
}
void deleteArrInputElement(int*& arr, int& size, int element) {
	int *arr2 = new int[size-1];
	element--;
	for (int i = 0; i < size; i++)
	{
		if (i<element)
		{
			arr2[i] = arr[i];
		}
		else if (i>=element)
		{
			arr2[i] = arr[i+1];
		}
	}
	delete[]arr;
	arr = arr2;
	size--;
}
void addArr1Element(int*& arr, int& size, int element) {
	int* arr2 = new int[size + 1];
	arr2[0] = element;
	cout << arr2[0];
	for (int i = 1; i < size+1; i++)
	{
		arr2[i]=arr[i-1];
	}
	delete[]arr;
	arr = arr2;
	size++;
}
int main() {
	int size = 10;
	cout << "ENTER SIZE" << endl;
	cout << "   ";
	cin >> size;
	int input = 0;
	int* arr = new int[size];
	int* arr2 = new int[size];
	int element = 0;
	fillArr(arr, size);
	fillArr(arr2, size);
	while (input!=6)
	{
		printMenu(input);
		switch (input)
		{
		case 1:
			printArr(arr, size);
			break;
		case 2:
			cout << "ENTER LAST ELEMENT:" << endl;
			cin >> element;
			addArrElement(arr, arr2, size, element);
			break;
		case 3:
			deleteArrElement(arr,size);
			break;
		case 4:
			cout << "ENTER ELEMENT WHAT NEEDS TO DELETE:" << endl;
			cin >> element;
		deleteArrInputElement(arr,size,element);
			break;
		case 5:
			cout << "ENTER ELEMENT WHAT NEEDS TO ADD AT 1 ELEMENT:" << endl;
			cin >> element;
			addArr1Element(arr, size, element);
			break;
		case 6:
			break;
		default:
			cout << "Haven`t this element" << endl;
			break;
		}
	}
	return 0;
}