#include "binary_search.h"

int *load_array(const char* filename, size_t *size) {
      FILE *fp = fopen(filename, "r");
      if (fp == NULL) {
          return NULL;
      }

      *size = 1;
      int x;
      int number_of_element = 0;
      int *array = malloc(1 * sizeof(int));

      while (fscanf(fp, "%i", &x) == 1) {
          if (*size == number_of_element) {
              *size = *size * 2;
              array = realloc(array, *size * sizeof(int));
          }
          array[number_of_element] = x;
          number_of_element++;
      }
      *size = number_of_element;

      if (*size > number_of_element) {
          array = realloc(array, number_of_element * sizeof(int));
      }

      fclose(fp);
      return array;
}

int is_sorted(int *array, size_t size) {
      int b = 0;
      for (int i = 0; i < size - 1; i++) {
          if (array[i] > array[i + 1]) {
              b++;
          }
      }
      if (b == 0) {
          return 1;
      }
      else {
          return 0;
      }
}

int binary_search(int target, int *array, int start, int end) {
      int middle = (start + end) / 2;

      if (start <= end) {
          if (array[middle] == target) {
              return 1;
          }
          else if (array[middle] > target) {
              return binary_search(target, array, start, middle - 1);
          }
          else {
              return binary_search(target, array, middle + 1, end);
          }
      }
      else {
          return 0;
      }
}
