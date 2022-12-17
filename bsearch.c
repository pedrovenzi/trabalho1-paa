#include <stdio.h>
#include <math.h>

int binSearch(int* list, int numElements, int query) {

    int seeker;
    int left = 0;
    int right = numElements;
    while (left <= right) {
        seeker = (left + right) / 2;
        if (list[seeker] == query) {
            if (list[seeker] == list[seeker - 1]) {
                right -= 1;
            } else {
                return seeker;
            }
        }
        if (list[seeker] >= query) {
            right = seeker - 1;
        } else {
            left = seeker + 1;
        }
    }
    return -1;
}

int main() {
    int numQueries, numElements;

    scanf("%d %d", &numElements, &numQueries);

    int ordList[numElements];

    for (int j = 0; j < numElements; j++) {
        scanf("%d", &ordList[j]);
    }

    for (int k = 0; k < numQueries; k++) {
        int query;
        scanf("%d", &query);
        printf("%d\n", binSearch(ordList, numElements, query));
    }

    return 0;
}