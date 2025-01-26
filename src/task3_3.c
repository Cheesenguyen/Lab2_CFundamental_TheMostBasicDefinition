#include <stdio.h>

int main() {
    char input[101]; 
    scanf("%[^\n]", input);
    printf("%s\n", input);

    return 0;
}
