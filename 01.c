#include <stdio.h>
#include <conio.h>

int main() {
    int i, j;

    clrscr();  // Clears the screen (works only in Turbo C)

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    getch();   // Waits for a key press
    return 0;
}
