#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
using namespace std;
//использование обратных итераторов
void task5() {
    cout << "Task 5: implementing reverse iterators\n";
    vector<char> vector = { 'a', 'b', 'c', 'd', 'e' };
    cout << "Current vector: ";
    for (auto i = vector.begin(); i != vector.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    cout << "Elements of the vector in reverse order: \n";
    for (auto i = vector.rbegin(); i != vector.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
}
