#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    // Function to print buffer in hexa, not relevant to the create_array function
}

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
