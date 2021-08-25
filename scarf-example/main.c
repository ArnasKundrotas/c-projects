#include <stdio.h>
#include <stdlib.h>

int main() {

    int grade1;
    int grade2;

    printf ("Enter your first grade:");
    scanf("%d", &grade1);

    printf ("Enter your last grade:");
    scanf("%d", &grade2);

    printf ("Your average grade = %d\n", (grade1+grade2)/2);

    return 0;
}