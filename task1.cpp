#include <iostream>
#include <vector>
using namespace std;
//реализация find, max, min
vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int value) {
	for (auto i = begin; i != end; ++i) {
		if (*i == value) return i;
	}
	return end;
}
int min(vector<int>::iterator begin, vector<int>::iterator end) {
	int curmin = *begin;
	for (auto i = begin; i != end; ++i) {
		if (curmin > *i) curmin = *i;
	}
	return curmin;
}
int max(vector<int>::iterator begin, vector<int>::iterator end) {
	int curmax = *begin;
	for (auto i = begin; i != end; ++i) {
		if (curmax < *i) curmax = *i;
	}
	return curmax;
}
void task1() {
	cout << "Task 1: custom find and min/max\n";
	int value;
	vector<int> numbers = { 1, 2, 3, 4, 5, 10 };
	cout << "Current vector: ";
	for (auto i = numbers.begin(); i != numbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	vector<int>::iterator n_begin = numbers.begin();
	vector<int>::iterator n_end = numbers.end();
	cout << "Enter value to find: ";
	cin >> value;
	if (find(n_begin, n_end, value) != n_end) cout << "Element is found\n";
	else cout << "Element is not found\n";
	cout << "Min value: " << min(n_begin, n_end) << endl;
	cout << "Max value: " << max(n_begin, n_end) << endl;
	cout << endl;
}
