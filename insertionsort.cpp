#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int insertionSort(vector <int> list) {
    // Base case. A list of zero or one elements is sorted, by definition.
    int swapCount = 0, element, j;
    int i = 1;

    while (i < list.size()) {
        element = list[i];
        j = i - 1;
        while (j >= 0 and list[j] > element) {
            list[j+1] = list[j];
            swapCount += 1;
            j = j - 1;
        }
        list[j+1] = element;
        i = i + 1;
    }

    return swapCount;
}

int main() {
    string testCases, numElements, arrayElements;
    string num_str;
    int testCasesInt;
    int swapCount;
    vector<int> unord_vector;
    vector<vector<int>> big_vector;

    getline(cin, testCases);
    testCasesInt = stoi(testCases);

    for (int i = 0; i < testCasesInt; i++) {
        vector<int> input_vector = {};
        getline(cin, numElements);
        getline(cin, arrayElements);
        stringstream obj_ss(arrayElements);
        while (getline(obj_ss, num_str, ' ')) {
            input_vector.push_back(stoi(num_str));
        }
        big_vector.push_back(input_vector);
    }

    for (int i = 0; i < testCasesInt; i++) {
       swapCount = insertionSort(big_vector[i]);
       cout << swapCount << endl;
    }

    return 0;
}


