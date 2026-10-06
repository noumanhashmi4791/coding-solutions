#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find minimum distance from any of the 4 edges
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;
            
            int min_dist = top;
            if (bottom < min_dist) min_dist = bottom;
            if (left < min_dist) min_dist = left;
            if (right < min_dist) min_dist = right;
            
            // The value at (i, j) is n minus the minimum distance
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }
    
    return 0;
}
