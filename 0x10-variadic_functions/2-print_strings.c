#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list ptr;
  unsigned int i;

  va_start(ptr, n);

  for (i = 0; i < n; i++) {
    if (ptr == NULL) {
      printf("nil");
    } else {
      if (separator != NULL && i != 0) {
        printf("%s", separator);
      }
      printf("%s", va_arg(ptr, char));
    }
  }

  va_end(ptr);
  printf("\n");
}
