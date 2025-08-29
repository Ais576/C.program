#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
