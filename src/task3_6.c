#include <stdio.h>
int main() {
    char prefix[11], name[91];
    scanf("%10s %[^\n]", prefix, name);
    printf("%s\n", name);
    return 0;
}