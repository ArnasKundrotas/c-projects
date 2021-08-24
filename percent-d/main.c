#include <stdio.h>
#include <stdlib.h>

int main() {

    printf ("some text %d then som etext %d another text %d and another text %d\n", 1,2,3,4);
    
    printf ("some text %d then som etext %d another text %d and another text %d\n", 1.2346446,2,3,4);

    printf ("some text %d then som etext %d another text %d and another text %d\n", 93.7,2,3,4);

    printf ("some text %f then som etext %d another text %d and another text %d\n", 93.7,2,3,4);

    printf ("some text %.1f then som etext %d another text %d and another text %d\n", 93.7,2,3,4);

    printf ("some text %.1f then som etext %c another text %d and another text %d\n", 93.7,"abcd",3,4);

    return 0;
}