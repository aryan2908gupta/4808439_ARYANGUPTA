#include <stdio.h>
#include <string.h>

void string_xor(char *s, char *t) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            putchar('0');
        } else {
            putchar('1');
        }
    }
}

int main() {
    char s[101], t[101];
    scanf("%100s", s);
    scanf("%100s", t);
    string_xor(s, t);
    return 0;
}
