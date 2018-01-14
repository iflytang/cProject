#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main() {

    /* test void pointer*/
    /*void * p1;
    char *b = "abcdefgh";
    int size = 3;
    p1 = b;
    b = b + size;

    printf("vaule = %s, sizeof p1: %d\n",b, sizeof(p1));*/

    /* test memcpy()*/
    /*char * dst;
    dst = (char *)malloc(255);
    char *src = "I am iflytang.\0 Nice to meet you.";
    memcpy(dst, src, strlen(src));
    printf("memcpy: %s\n", dst);
    free(dst);*/

    /* test & */
    int a = 0xff;
    int b = 0xf0;
    if (a & ~b) {
        printf("if(~b:%x) ==> a(%x) & b(%x) =  %x\n",~b, a, b, a & b);
    } else {
        printf("else ==> a(%x) & b(%x) =  %x\n",a, b, a & b);
    }

    /* test ennum */
    enum Num {
        one,
        two,
        three
    };
    printf("ones's enum = %d\n", one);

    return 0;
}