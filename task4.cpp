#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
using namespace std;
//взаимодействие итераторов между вектором и двухсторонней очередью
void task4() {
	cout << "Task 4: iterator interaction between vector and deque\n";
	vector<char> vector = { 'a', 'b', 'c', 'd', 'e' };
	deque<char> deque;
	cout << "Current vector: ";
	for (auto i = vector.begin(); i != vector.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	cout << "Copying elements from vector to queue. . .\n";
	for (auto i = vector.begin(); i != vector.end(); ++i) {
		deque.push_back(*i);
	}
	cout << "Current deque: ";
	for (auto i = deque.begin(); i != deque.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
}