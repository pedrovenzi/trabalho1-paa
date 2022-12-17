//
// Created by pedrovenzi on 15/12/22.
//
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
//5 4
//2 4 7 7 9
//7
//10
//4
//2

int binSearch(int* list, int numElements, int query) {

    int seeker;
    int left = 0;
    int right = numElements - 1;
    while (left <= right) {
        seeker = floor((left + right) / 2);
        if (list[seeker] < query) {
            left = seeker + 1;
        }
        else if (list[seeker] > query) {
            right = seeker - 1;
        }
        else {
            return seeker;
        }
    }
    return -1;

}

int main() {

    //string arrayQuantities, arrayElements, arrayQueries, elementStr;
    int numQueries, numElements;
    //vector<int> numbers;

    //Captura Numero de Elementos e Queries
    //getline(cin, arrayQuantities);
    //stringstream ss_line1(arrayQuantities);
    //while (getline(ss_line1, elementStr, ' ')) {
    //    numbers.push_back(stoi(elementStr));
    //}
    scanf("%d %d", &numElements, &numQueries);

    //numQueries = numbers[1];
    //numElements = numbers[0];

    //Captura Elementos
    int ordList[numElements];
    //int queriesList[];
    //int numElementsInt = stoi(numElements);
    //int ordList[numElementsInt];

    //getline(cin, arrayElements);
    //stringstream ss_line2(arrayElements);
    //while (getline(ss_line2, elementStr, ' ')) {
    //    ordList.push_back(stoi(elementStr));
    //}

    for (int j = 0; j < numElements; j++) {
        scanf("%d", &ordList[j]);
    }

    for (int k = 0; k < numQueries; k++) {
        int query;
        scanf("%d", &query);
        printf("%d\n", binSearch(ordList, numElements, query));
    }

    //Captura Queries TODO
    //vector<int> queriesList;

    //for (int i = 0; i < (numQueries); i++) {
    //    getline(cin, elementStr);
    //    queriesList.push_back(stoi(elementStr));
    //    position = binSearch(ordList, numElements, stoi(elementStr));
    //    printf("%d\n", position);
    //}

    //Chama a busca binária
    //for (int i = 0; i < (numQueries - 1); i++) {
     //   position = binSearch(ordList, numElements, queriesList[i]);
    //    cout << position << endl;
    //}

    return 0;
}