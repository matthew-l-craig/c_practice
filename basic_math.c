/*
 * This is a boilerplate C program that provides a starting point for
 * developing C programs. It includes a basic main function and some
 * useful comments to help you get started.
 *
 * Author: [Your Name]
 * Date: [Today's Date]
 */

#include <stdio.h>


int add(int numbers[], int array_size) {

   int sum = 0;

   for(int i = 0; i < array_size; i++){

       sum += numbers[i];

   }

   return sum;

}

int main(void) {
    // This is the main function of the program
    printf("Hello, World!\n");

    int numbers[] = {25, 50, 75, 100, 100};

    char str[100];

    printf("%d", add(numbers, sizeof(numbers)/sizeof(int)));

    return 0;
}

/*
 * The main function is the entry point for the program.
 * It returns an integer value to the operating system.
 *
 * The `printf` function is used to print text to the console.
 * In this case, it prints the message "Hello, World!" followed
 * by a newline character.
 *
 * The `return 0` statement indicates that the program has completed
 * successfully. A non-zero return value typically indicates an error.
 */
