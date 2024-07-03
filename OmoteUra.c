#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *results[3];
    int headsCount = 0;
    int tailsCount = 0;

    srand(time(0));
    printf("Tossing a coin...\n");

    for (int i = 0; i < 3; i++) {
        if (rand() % 2 == 0) {
            results[i] = "Heads";
            headsCount++;
        } else {
            results[i] = "Tails";
            tailsCount++;
        }
        printf("Round %d: %s\n", i + 1, results[i]);
    }

    printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);

    return 0;
}
