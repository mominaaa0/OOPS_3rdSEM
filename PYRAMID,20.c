// 18/09/25
#include <stdio.h>
int main() {
    int height = 30;

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("X");
        printf("\n");
    }
    return 0;
}
