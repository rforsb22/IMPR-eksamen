#include <stdio.h>

int main(void) {

    char c;

    scanf("%c", &c);
    printf("%c:", c);

    switch (c) {

        case 'b':
            printf("1");
            break;

        case 'e':
            printf("2");

        case 'a':
            printf("3");

        case 'c':
            printf("4");
            break;

        case 'd':
            printf("!");
    }
    printf("\n");
    return 0;
}
//
