#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void display(const vector<string>*const v) {
	for (auto str : *v) {
		cout << str << " ";
	}
	cout << endl;
}

void display(int* array, int sentinel) {
	while (*array != sentinel) {
		cout << *array++ << " ";
	}
	cout << endl;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void double_data(int* int_ptr) {
	*int_ptr *= 2;
}

int main() {
	int value{ 10 };
	int* int_ptr{ nullptr };

	cout << "Value: " << value << endl;
	double_data(&value);
	cout << "Value: " << value << endl;

	cout << "------------------------------------" << endl;
	int_ptr = &value;
	double_data(int_ptr);
	cout << "Value: " << value << endl;

	cout << "==========================================" << endl;
	int x{ 100 }, y{ 200 };
	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;

	swap(&x, &y);

	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;

	cout << "==========================================" << endl;
	vector<string> stooges{ "larry", "Moe", "Curly" };
	display(&stooges);

	cout << "\n------------------------------------" << endl;
	int scores[]{ 100, 98, 97, 79, 85, -1 };
	display(scores, -1);

	cout << endl;
	return 0;
}