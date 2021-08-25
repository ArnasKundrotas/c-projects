#include <stdio.h>
#include <stdlib.h>

int main() {

    double rect_height;
    double rect_width;
    double rect_area;

    printf ("Enter rectangle height: ");
    scanf ("%lf", &rect_height);
    printf ("%lf", rect_height);

    printf ("Enter rectangle width: ");
    scanf ("%lf", &rect_width);
    printf ("%lf", rect_width);

    rect_area = rect_height * rect_width;

    printf ("Rectangle area is: %lf", rect_area);

    return 0;
}