/**
* Created by tsf on 18-1-24.
*/

#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>


int main() {
    /* pointer function, whose return value is a pointer of certain data type */
    int * sum(int a, int b);
    /* function pointer, whose function name is a pointer */
    int (*func)(int a, int b);
    int max(int a, int b);
    int min(int a, int b);

    int *p1 = sum(1, 2);
    printf("p1 = %x, *p1 = %d\n", p1, *p1);

    func = max;  // the function name is a pointer, in fact
    int retmax = func(4, 9);
    printf("ret_max: %d\n", retmax);

    func = min; // point to 'min'
    int retmin = func(4, 9);
    printf("ret_min: %d\n", retmin);

    return 0;
}

int * sum(int a, int b) {
    int *p = (int *)malloc(sizeof(int));
    memset(p, 0, sizeof(*p));
    *p = a + b;
    printf("p = %x, *p = %d\n", p, *p);
    return p;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

