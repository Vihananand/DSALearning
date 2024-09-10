#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (C != 0) {
        if ((B - A) % C == 0) {
            printf("1");
        } else {
            printf("0");
        }
    } else {
        printf("0");
    }

    return 0;
}