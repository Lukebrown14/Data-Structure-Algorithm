#include <stdio.h>

// A fixed-size collection of elements all of the same type, in contiguous memory

int main(){

    int numbers[5]; // Declares an array of 5 integers
    char letters[5] = {'a', 'b', 'c', 'd', 'e'}; // Declares an initializes an array of 5 characters

    // Accressing Elements
    int firstElement = numbers[0];
    int secondElement = numbers[1];

    // Accessing and printing elements of array

    int arrayNumber[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Element at index %d, %d\n", i, arrayNumber[i]);
    }

    return 0;
}
