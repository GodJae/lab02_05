#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int num;


int main(int argc, char **argv) {
	vector<int> numbers;
	int counter = 0;
	while (cin >> num) {
		numbers.push_back(num);
		counter ++;
	}
	for (auto m : numbers) {
		 cout << m << " ";

	}
	cout << endl;
	cout << endl;
	cout << "ordered array" << endl;
	sort(numbers.rbegin(), numbers.rend());
	for (auto m : numbers) {
		cout << m << " ";
	}
	cout << endl;

	return 0;
}