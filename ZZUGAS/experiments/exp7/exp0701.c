#include <stdio.h>

void printEAX() {
    int i;
    for (i = 31; i >= 0; i--)
    {
        if (val & (1U << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
}

int main() {
    int i = 0x8F98FF00;
    printEAX();
    return 0;
}
