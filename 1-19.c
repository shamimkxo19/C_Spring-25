#include <stdio.h>

int main() {
    char line[1000];

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    printf("You entered: %s", line);

    return 0;
}

