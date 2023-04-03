#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

	int score{ 100 };
	int *score_ptr{ &score };

	cout << *score_ptr << endl; // 100

	*score_ptr = 200;

	cout << *score_ptr << endl; // 200
	cout << score << endl; // 200

	cout << "\n------------------------------" << endl;


	cout << endl;
	return 0;
}