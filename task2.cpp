#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
//добавление и удаление элементов через итераторы-адаптеры
void task2() {
	cout << "Task 2: adding and removing elements through adapter iterators\n";
	int value;
	vector<int> numbers = { 1, 2, 3, 4, 5, 10 };
	vector<int>::iterator n_begin = numbers.begin();
	vector<int>::iterator n_end = numbers.end();
	back_insert_iterator<vector<int>> back_insert(numbers);
	cout << "Enter value to add to the end: ";
	cin >> value;
	*back_insert = value;
	cout << "Last element: " << *(--numbers.end()) << endl;
	cout << "Current vector: ";
	for (auto i = numbers.begin(); i != numbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	cout << "Enter value - number position to insert in the vector: ";
	cin >> value;
	vector<int>::iterator insert = numbers.begin() + value - 1;
	insert_iterator<vector<int>> inserter(numbers, insert);
	cout << "Enter value to insert in the vector: ";
	cin >> value;
	*inserter = value;
	cout << "Current vector: ";
	for (auto i = numbers.begin(); i != numbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	cout << "Enter value - number position to erase from the vector: ";
	cin >> value;
	vector<int>::iterator remove = numbers.begin() + value - 1;
	numbers.erase(remove);
	cout << "Current vector: ";
	for (auto i = numbers.begin(); i != numbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
}