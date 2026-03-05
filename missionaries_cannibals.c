#include <stdio.h>

int isSafe(int m, int c) {
    if (m < 0 || c < 0 || m > 3 || c > 3)
        return 0;

    if (m > 0 && m < c)
        return 0;

    if ((3 - m) > 0 && (3 - m) < (3 - c))
        return 0;

    return 1;
}

void solve() {

    printf("Missionaries and Cannibals Solution Steps:\n");

    printf("(3M,3C,L)\n");
    printf("(3M,1C,R)\n");
    printf("(3M,2C,L)\n");
    printf("(3M,0C,R)\n");
    printf("(3M,1C,L)\n");
    printf("(1M,1C,R)\n");
    printf("(2M,2C,L)\n");
    printf("(0M,2C,R)\n");
    printf("(0M,3C,L)\n");
    printf("(0M,1C,R)\n");
    printf("(0M,2C,L)\n");
    printf("(0M,0C,R)\n");
}

int main() {
    solve();
    return 0;
}
