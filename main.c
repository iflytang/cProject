#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdbool.h>
#include <netinet/in.h>
#include <assert.h>

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
   /* int a = 0xff;
    int b = 0xf0;
    if (a & ~b) {
        printf("if(~b:%x) ==> a(%x) & b(%x) =  %x\n",~b, a, b, a & b);
    } else {
        printf("else ==> a(%x) & b(%x) =  %x\n",a, b, a & b);
    }

    /* test ennum */
    /*enum Num {
        one,
        two,
        three
    };
    printf("ones's enum = %d\n", one);*/


    /*test short size*/
    /*short short_num = 12;
    printf("short's size is %d\n", sizeof short_num);*/

    /*bool is_true(int int_a) {
        if (int_a > 0)
            return true;
        else
            return false;
    }
    bool print_true() {
        printf("print_true\n");
        return true;
    }
    bool print_false() {
        printf("print_false\n");
        return true;  // test oder operation. should overwrite by followed false
    }
    bool bool_a = is_true(-2) ? print_true() : (print_false(), false);  // order operation
    printf("bool_a ? %d\n", bool_a);*/

    /* big endian and little endian */
    /*uint16_t OFPC_FRAG_MASK = 3;
    uint16_t OFPC_INVALID_TTL_TO_CONTROLLER = 1 << 2;
    unsigned short valid_mask = htons(OFPC_FRAG_MASK);
    printf("FRAG_MASK: %d; valid_mask: %d\n", OFPC_FRAG_MASK, valid_mask);
    unsigned short ttl_bit = htons(OFPC_INVALID_TTL_TO_CONTROLLER);
    printf("TTL: %d, ttl_bit: %d\n",OFPC_INVALID_TTL_TO_CONTROLLER, ttl_bit);
    printf("valid_mask:%d, ", valid_mask);
    valid_mask |= ttl_bit;
    printf("ttl_bit: %d, valid_mask:%d\n", ttl_bit, valid_mask);*/

    /* define as a function */
    /*#define FORCE_TO_INT(X) ((int)(X))
    int int_a = FORCE_TO_INT((2.5));
    printf("value: %d\n", int_a);*/

    /* test assert*/
    /*assert(0 & int_a);
    printf("value: %d\n", int_a);*/

    /* test nested struct */
/*    struct flow {
        int a;
        int b;
    };
    struct wildcards {
        struct flow masks;
    };
    struct value {
        struct flow value;
    };
    struct match {
        struct flow flow;
        struct wildcards wc;
        struct value value;
    };
    struct match match_x;
    match_x.flow.a = 0xff;
    match_x.flow.b = 0xff;
    match_x.wc.masks.a = 0x00;
    match_x.wc.masks.b = 0x11;
    match_x.value.value.a = match_x.flow.a & match_x.wc.masks.a;
    match_x.value.value.b = match_x.flow.b & match_x.wc.masks.b;
    printf("value_a: %x\tvalue_b:%x\n",match_x.value.value.a, match_x.value.value.b);*/

    /* test sizeof array */
    /*int a[1024/8];
    printf("sizeof a: %d\n", sizeof a);*/

    /* test a roundup method */
    /*#define ROUNDUP(X, Y) (X+Y-1)/Y*Y  // X should be integer product of Y
    int x = 9;
    int y = 8;
    printf("roundup(num: %d, base: %d) is %d\n", x, y, ROUNDUP(x, y));*/

    /* test sizeof */
    /*struct test {
        int a;
        int b;
    };
    struct test *test;
    int size = 1;
    printf("sizeof *test + size: %d\n ", sizeof *test + size); *//* sizeof has higher priority than '+' */

    /* test structure */
  /*  struct test {
        int *a;
        char b;
        float c;
    };
    struct test *test;  *//* structure pointer should be initialized *//*
    printf("pointer of test: %p\n", test);
    test = (struct test *)malloc(sizeof(*test));
    printf("pointer of test: %p\n", test);
    int int_a = 2;
    test->a = &int_a;
    test->b = 'b';
    test->c = 1.25;
    printf("a: %d\nb: %c\nc: %.2f\n", *test->a, test->b, test->c);
    free(test);*/

    /* test nested structure */
    /*struct node {
        bool flag;
        bool f;      // the same type variable should store consecutively to avoid ALIGN memory waste
        char *str;
        struct node *node;
    };
    printf("offsetof str: %d\n", offsetof(struct node, str)); // here have ALIGN(64b=8B), so 'struct' wastes memory
    struct node *root = (struct node *)malloc(sizeof *root);
    root->flag = true;  // or *root.flag=true
    root->str = "root";
    struct node *node = (struct node *)malloc(sizeof *node);
    node->flag = true;
    node->str = "iflytang";
    root->node = node;
    printf("root->str: %s\n root->node->str:%s\n", root->str, root->node->str);
    printf("offsetof node: %d\n", offsetof(struct node, node));
    free(root);
    free(node);*/

    /* test union */
    /*union u_test {
        float f;
        int i;
    };
    union u_test u_test;
    u_test.f = 3.14;
    //u_test.i = 4;
    printf("%.2f\t%d\n", u_test.f, u_test.i);  // we cannot access two variables at same time*/

    /* test parameter of array */
    int print_char(const char *str) { // int print_char(const char str[])
        printf("in print_char\n");
        while (*str != '\0') {
            printf("str: %c\n", *str);
            str++;
        }
        return 0;
    }
    char str[] = "123";
    print_char(str);

    return 0;
}