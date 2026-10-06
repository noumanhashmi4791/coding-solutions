#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;

    // Read two integers from the first line
    scanf("%d %d", &int1, &int2);

    // Read two float numbers from the second line
    scanf("%f %f", &float1, &float2);

    // Print integer sum and difference
    printf("%d %d\n", int1 + int2, int1 - int2);

    // Print float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    return 0;
}
