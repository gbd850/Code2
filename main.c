#include <stdio.h>
#include <stdlib.h>
#include "area.h"
#include "volume.h"

int main(int argc, char *argv[]) {
    int a;
    if (argc == 2) {
        a = atoi(argv[1]);
    }
    else {
        printf("Usage: Code2 length-of-edge\n");
        return 1;
    }
    printf("Cube Area for a=%d : %d \n", a, cubeArea(a));
    printf("Cube Volume for a=%d : %d \n", a, cubeVolume(a));
    printf("Square Area for a=%d : %d \n", a, squareArea(a));
    return 0;
}