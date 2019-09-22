#include <stdio.h>
#include <stdlib.h>
#include "binary_search.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Provide a file to read\n");
        return 1;
    }

    size_t size;
    int *result_1 = load_array(argv[1], &size);
    if (result_1 == NULL) {
        printf("File does not exist\n");
        return 2;
    }

    int result_2 = is_sorted(result_1, size);
    if (result_2 == 0) {
        printf("The array is not sorted\n");
        return 3;
    }

    printf("Enter integers to search for. Press ctrl+d when done.\n");

    int a;


    while (scanf("%i",&a) == 1) {
          int start = 0;
          int end = size - 1;

          int result = binary_search(a, result_1, start, end);
          if (result == 1) {
              printf("Yes\n");
          }
          else {
              printf("No\n");
          }
    }

    return 0;
}
