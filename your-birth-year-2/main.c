#include <stdio.h>
#include <stdlib.h>

int main() {

    int current_year;
    int your_age;

    printf ("Enter current year:");
    scanf("%d", &current_year);

    printf ("Enter your age:");
    scanf("%d", &your_age);

    printf ("Your birth year is: %d\n", current_year-your_age);

    return 0;
}