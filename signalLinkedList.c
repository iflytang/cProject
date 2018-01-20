/**
 * Created by tsf on 18-1-20.
 * @Descrip test single linked list
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main() {
    /* create root node */
    struct node {
        struct node *next;
        int value;
    };
    struct node *root = (struct node *) malloc(sizeof(struct node));
//    root->value = 0;
//    printf("root = %d\n", root->value);

    /* create a linked list */
    struct node *temp = root;
    for (int i = 1; i < 11; i++) {
        temp->next = (struct node *) malloc(sizeof(struct node));
        temp->next->value = i;
        temp = temp->next;
    }
    temp->next = NULL;

    /* display the linked list */
    printf("======================================================\n");
    temp = root->next;
    struct node *destory;   // release memory to avoid memory leak
    for (int i = 1; i < 11; i++) {
        printf("node[%d] = %d\t", i, temp->value);
        destory = temp;
        temp = temp->next;
        if (i % 5 == 0) {
            printf("\n");
        }
        free(destory);
    }

    return 0;
}