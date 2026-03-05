#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

void waterJug(int jug1, int jug2, int target) {
    int from = jug1;
    int to = 0;

    printf("Step\tJug1\tJug2\n");
    printf("1\t%d\t%d\n", from, to);

    int step = 2;

    while (from != target && to != target) {

        int temp = min(from, jug2 - to);
        to += temp;
        from -= temp;

        printf("%d\t%d\t%d\n", step++, from, to);

        if (from == target || to == target)
            break;

        if (from == 0) {
            from = jug1;
            printf("%d\t%d\t%d\n", step++, from, to);
        }

        if (to == jug2) {
            to = 0;
            printf("%d\t%d\t%d\n", step++, from, to);
        }
    }
}

int main() {
    waterJug(4,3,2);
    return 0;
}
