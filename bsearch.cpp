//
// Created by pedrovenzi on 15/12/22.
//
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void binSearch(int list[]) {

}

int main() {
    string arrayQuantities, arrayElements, arrayQueries, elementStr;
    int numQueries, numElements;
    vector<int> numbers;

    //Captura Numero de Elementos e Queries
    getline(cin, arrayQuantities);
    stringstream ss_line1(arrayQuantities);
    while (getline(ss_line1, elementStr, ' ')) {
        numbers.push_back(stoi(elementStr));
    }
    numQueries = numbers[0];
    numElements = numbers[1];

    //Captura Elementos
    vector<int> ordList;
    //int numElementsInt = stoi(numElements);
    //int ordList[numElementsInt];

    getline(cin, arrayElements);
    stringstream ss_line2(arrayElements);
    while (getline(ss_line2, elementStr, ' ')) {
        ordList.push_back(stoi(elementStr));
    }

    //Captura Queries TODO
    vector<int> queriesList;

    getline(cin, arrayQueries);
    stringstream ss_line3(arrayQueries);
    for (int i = 0; i < numQueries; i++)
    while (getline(ss_line3, elementStr)) {
        queriesList.push_back(stoi(elementStr));
    }

    //Chama a busca binária

    binSearch(ordList);

    for (int num : ordList) {
        cout << num << " ";
    }

    return 0;
}

void binSearch(int list[]) {

}