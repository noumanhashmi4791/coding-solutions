#include <stdio.h>

// Helper function to find the maximum of two numbers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to return the maximum of four numbers
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}
