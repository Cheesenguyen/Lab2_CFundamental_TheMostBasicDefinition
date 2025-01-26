#include <stdio.h>

int main() {
    char name[101]; 
    scanf("Full Name: %[^\n]", name);
    printf("%s\n", name);

    return 0;
}