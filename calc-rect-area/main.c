#include <stdio.h>
#include <stdlib.h>

int main() {

    int rect_height;
    int rect_width;

    printf ("Enter rectangle height: ");
    scanf ("%d", &rect_height);

    printf ("Enter rectangle width: ");
    scanf ("%d", &rect_width);

    printf ("Rectangle area is: %d", rect_height*rect_width);

    return 0;
}