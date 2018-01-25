/**
* Created by tsf on 18-1-25.
 *
 * @Descrip use 'function pointer' as callback function.
*/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

typedef void (*Handler)(int signum); // declare a function pointer type, use 'Handler' directly

void handler(int signum) {
    printf("It's time to get up!\n");
}

int main() {

    /* callback, pay attention to parameter, which is a function pointer */
    unsigned int sleep_time = 10;
    alarm(sleep_time);  // when sleep_time up, throw SIGALRM
//    signal(SIGALRM, handler); // handler(int signum) is called
    Handler hdl = handler;  // typedef works here
    signal(SIGALRM, hdl);

    for(int i = 0; i < sleep_time; i++) {
        sleep(1);  // describe time pass
        printf("%ds passed.\n", i + 1);
    }

    printf("sleep over.\n");

    return 0;
}