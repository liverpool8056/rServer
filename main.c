#include <stdio.h>
#include "hello.h"
#include <unistd.h>

int INTERVAL = 1;

void main_loop(int count){
    int i = 0;
    for(int i=0; i<count; i++){
        printf("Loop count: %d\n", i);
        sleep(INTERVAL);
    }
}

int main(){
    int a = 1;
    char name[] = "robin";
    int count = 10;
    printf("Started\n");
    main_loop(count);
    hello(name);
    printf("Finished");
}

