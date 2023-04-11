#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0) // Return NULL if size is 0
        return NULL;

    char *array = malloc(sizeof(char) * size); // Allocate memory for the array

    if (array == NULL) // Check if malloc fails
        return NULL;

    for (unsigned int i = 0; i < size; i++) // Initialize array with specified char
        array[i] = c;

    return array; // Return pointer to the array
}
