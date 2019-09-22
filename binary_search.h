#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/*
 * Loads integer values from a file into an array of ints. Returns a pointer to
 * the array, or NULL if there is an error reading from the given file. Sets
 * the variable pointed to by size to the size of the array.
 *
 *   Parameters:
 *     filename - string containing the name of the file to read
 *     size - pointer to a value which will contain the size upon returning
 *
 *   Return value:
 *     A pointer to the array, or NULL if there was an error
 */
int *load_array(const char* filename, size_t *size);

/*
 * Determines whether or not an array is sorted in ascending order.
 *
 *   Parameters:
 *     array - the array under consideration
 *     size - the number of elements in the array
 *
 *   Return value:
 *     1 if the array is sorted in ascending order, 0 if it is not
 */
int is_sorted(int *array, size_t size);

/*
 * Performs a recursive binary search to determine whether or not an integer
 * is in an array. The array must be sorted.
 *
 *   Parameters:
 *     target - the integer to search for
 *     array - the array to search in
 *     start - the index of the first element in the array to consider
 *     end - the index of the last element in the array to consider
 *
 *   Return value:
 *     1 if the target is in the array, 0 if it is not
 */
int binary_search(int target, int *array, int start, int end);

#endif
