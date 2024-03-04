#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <fstream>
using namespace std;
//реализация файлового ввода-вывода с помощью итераторов
void task3() {
    cout << "Task 3: implementing file input/output using iterators\n";
	vector<string> strings = { "a", "b", "c", "d", "e"};
    ofstream ofstream("output.txt");
    if (ofstream.is_open()) {
        ostream_iterator<string> out(ofstream, " ");
        copy(strings.begin(), strings.end(), out);
        ofstream.close();
        cout << "Data has been written to the \"output.txt\" \n";
    }
    else {
        cerr << "Unable to open \"output.txt\" \n";
    }
    ifstream ifstream("input.txt");
    if (ifstream.is_open()) {
        vector<string> strings;
        istream_iterator<string> in(ifstream);
        while (in != istream_iterator<string>()) {
            strings.push_back(*in);
            ++in;
        }
        cout << "Reaing data from \"input.txt\:\n";
        for (auto i = strings.begin(); i != strings.end(); ++i) {
            cout << *i << " ";
        }
        cout << endl;
        ifstream.close();
    }
    else {
        std::cerr << "Unable to open \"input.txt\"\n";
    }
}