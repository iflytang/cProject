/**
* Created by tsf on 18-1-22.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "192.168.109.1,192.168.109.2,192.168.109.3,192.168.109.4"; /* must be char array, char pointer will be wrong */
    char *substr;
    char *substr_list[9];
    int index = 0;
    char *seg = ",";

    /* for method */
    for(substr = strtok(string, seg); substr != NULL; substr = strtok(NULL, seg)) {
        printf("substr[%d] = %s\n", index, substr);
        substr_list[index++] = substr;
    }

    /* while method */
   /* substr = strtok(string, seg);
    while (substr != NULL) {
        substr_list[index] = substr;
        printf("substr[%d] = %s\n", index, substr);
        index++;
        substr = strtok(NULL, seg);
    }*/


    return 0;
}