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
	for (int i = 0; i < size; i++)
	{
		int temp = arr[i][0];
		for (int j = 0; j < size - 1; j++)
		{
			arr[i][j] = arr[i][j + 1];
		}
		arr[i][size - 1] = temp;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;

}