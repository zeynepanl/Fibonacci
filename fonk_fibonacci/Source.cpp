#include<iostream>
using namespace std;

int fibonacci(int indisdegeri) {

	if (indisdegeri == 0 || indisdegeri == 1) {
		return 1;
	}
	else {
		return fibonacci(indisdegeri - 1) + fibonacci(indisdegeri - 2);
	}
}
int main() {
	int x = fibonacci(0);
	int x1 = fibonacci(1);
	int x2 = fibonacci(2);
	int x3 = fibonacci(3);
	int x4 = fibonacci(4);

	cout << x << " " << x1 << " " << x2 << " " << x3 << " " << x4;
	return 0;
}