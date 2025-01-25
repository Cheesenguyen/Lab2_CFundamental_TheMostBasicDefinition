#include <stdio.h>
int main() {
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.*f\n", n, x);
    return 0;
}
