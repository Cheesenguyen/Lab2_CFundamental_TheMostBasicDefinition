#include <stdio.h>
int main() {
    int id;
    scanf("%d", &id);
    int year = id / 10000;
    printf("%d\n%d\n", year, (year * 2) + (year % 100));
    return 0;
}