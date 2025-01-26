#include <stdio.h>
int main() {
    char str[101];
    scanf("%[ 0-48a-z@.]s", str);
    printf("%s\n", str);
    return 0;
}