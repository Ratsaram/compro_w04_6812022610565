#include <stdio.h>

void function() {
    int value = 99;
    printf("Value in function; %d\n", value);
}

int main() {
    int value = 42;
    printf("Value in main (before): %d\n",value);

    function();

    printf("Value in main (after): %d\n", value);
    return 0;
}