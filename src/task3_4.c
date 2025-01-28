#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    while (scanf("%c", &ch) == 1) {
        if (isdigit(ch)) { 
            break;
        }
        printf("%c", ch); 
    }
    printf("\n");
    return 0;
}
