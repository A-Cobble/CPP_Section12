#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {

	int num{ 10 };
	cout << "\nValue of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof num << endl;
	cout << "Address of num is: " << &num << endl;

	int* p{ nullptr };
	cout << "\Value of p is: " << p << endl;
	cout << "Address of p is: " << &p << endl;
	cout << "sizeof of p is: " << sizeof p << endl;



	cout << endl;
	return 0;
}