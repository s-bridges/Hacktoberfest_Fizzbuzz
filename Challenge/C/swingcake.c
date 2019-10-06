// https://github.com/swingcake

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("%d %s\n", i, i%15?i%3?i%5?"":"Ghost":"Rat":"Spider");
    }
    return 0;
}
