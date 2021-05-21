#include <stdio.h>
#include "area.h"
#include "volume.h"

int main() {
    float a = 5.2;
    printf("Cube Area for a=%f : %f \n", a, cubeArea(a));
    printf("Cube Volume for a=%f : %f \n", a, cubeVolume(a));
    printf("Square Area for a=%f : %f \n", a, squareArea(a));
    return 0;
}