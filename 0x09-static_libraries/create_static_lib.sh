#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create a static library called liball.a from the generated .o files
ar rcs liball.a *.o

# Display the contents of the static library
ar -t liball.a

# Clean up by removing the .o files
rm *.o

echo "Static library liball.a has been created successfully."
