int *array_range(int min, int max) {
  if (min > max) {
    return NULL;
  }

  int size = max - min + 1;
  int *array = malloc(size * sizeof(int));
  if (array == NULL) {
    return NULL;
  }

  for (int i = 0; i < size; i++) {
    array[i] = min + i;
  }

  return array;
}
