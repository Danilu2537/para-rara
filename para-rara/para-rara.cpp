#include <iostream>

using namespace std;

int main() {
	const int size = 5;
	int arr[size][size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j] = rand() % 10;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	int arr1[size][size];
	for (int i = 0, k = size-1; i < size; i++, k--)
	{
		for (int j = 0; j < size; j++)
		{
			arr1[i][j] = arr[j][k];
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << arr1[i][j] << " ";
		cout << endl;
	}
	cout << endl;

}