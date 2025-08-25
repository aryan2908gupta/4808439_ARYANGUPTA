#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isLeap(int y) {
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) return 1;
    return 0;
}

int monthDays(int m, int y) {
    if (m == 2) return isLeap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    scanf("%d-%d-%d %d-%d-%d", &d1, &m1, &y1, &d2, &m2, &y2);

    int count = 0;
    while (1) {
        long num = d1;
        num = num * 100 + m1;
        num = num * 10000 + y1;

        if (num % 4 == 0 || num % 7 == 0) {
            count++;
        }

        if (d1 == d2 && m1 == m2 && y1 == y2) break;

        d1++;
        if (d1 > monthDays(m1, y1)) {
            d1 = 1;
            m1++;
            if (m1 > 12) {
                m1 = 1;
                y1++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
