#include <stdlib.h>

int *array_range(int min, int max) {
    if (min > max) {
        return NULL;
    }

    int length = max - min + 1;
    int *arr = (int *) malloc(length * sizeof(int));

    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        arr[i] = min + i;
    }

    return arr;
}