#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max) {
    if (min > max) {
        return NULL;  // Invalid range
    }

    int num_elements = max - min + 1;
    int *result = (int *)malloc(num_elements * sizeof(int));

    if (result == NULL) {
        return NULL;  // Memory allocation failed
    }

    for (int i = 0; i < num_elements; i++) {
        result[i] = min + i;
    }

    return result;
}
