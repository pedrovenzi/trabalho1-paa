#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string line_input;
    string num_str;
    vector<int> unord_vector;

    getline(cin, line_input);
    stringstream obj_ss(line_input);

    while (getline(obj_ss, num_str, ' ')) {
        unord_vector.push_back(stoi(num_str));
    }

    mergeSort(unord_vector);

    for (int num : unord_vector) {
        cout << num << " ";
    }

    return 0;
}

void mergeSort(vector <int>) {

}
