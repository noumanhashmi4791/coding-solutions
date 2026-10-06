# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T20:20:08.790Z  

```c
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)