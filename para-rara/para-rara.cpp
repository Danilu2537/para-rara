#include <iostream>

using namespace std;

int add(int a, int b) {
	int c = a + b;
	return c;
}

int main() {
	int d = 3;
	int e = 4;
	int f = add(d, e);
	cout << f << endl;
}