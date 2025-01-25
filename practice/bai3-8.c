#include <stdio.h>
int main() {
    char str[101];
    scanf("%[ 0-4a-z@.]", str);
    printf("%s\n", str);
    return 0;
}