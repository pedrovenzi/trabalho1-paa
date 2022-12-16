#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right) {
    vector<int> result;

    while (!left.empty() and !right.empty()) {
        if (left[0] <= right[0]) {
            result.push_back(left[0]);
            left.erase(left.begin());
        }
        else {
            result.push_back(right[0]);
            right.erase(right.begin());
        }
    }

    while (!left.empty()) {
        result.push_back(left[0]);
        left.erase(left.begin());
    }
    while(!right.empty()) {
        result.push_back(right[0]);
        right.erase(right.begin());
    }

    return result;
}

vector<int> mergeSort(vector <int> list) {
    // Base case. A list of zero or one elements is sorted, by definition.
    if (list.size() <= 1) {
        return list;
    }

    // Recursive case. First, divide the list into equal-sized sublists
    // consisting of the first half and second half of the list.
    // This assumes lists start at index 0.
    vector<int> left;
    vector<int> right;

    for (int i = 0; i < list.size(); i++) {
        if (i < (list.size()/2)) {
            left.push_back(list[i]);
        } else {
            right.push_back(list[i]);
        }
    }

    // Recursively sort both sublists.
    left = mergeSort(left);
    right = mergeSort(right);

    // Then merge the now-sorted sublists.
    return merge(left, right);

}

int main() {
    string line_input;
    string num_str;
    vector<int> unord_vector;
    vector<int> ord_vector;

    getline(cin, line_input);
    stringstream obj_ss(line_input);

    while (getline(obj_ss, num_str, ' ')) {
        unord_vector.push_back(stoi(num_str));
    }

    ord_vector = mergeSort(unord_vector);

    for (int num : ord_vector) {
        cout << num << " ";
    }

    return 0;
}


