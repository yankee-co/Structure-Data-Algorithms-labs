    #include <stdlib.h>
    #include <stdio.h>
    #include "common.h"
    #include "MErr.h"

    FILE * logs;
    
    typedef int Tg1, Tg2, Tg3, Tg4, Tg5;
    int Vg1, Vg2, counter;
    int const Cg1 = 10, Cg2 = 20, Cg3 = 30;

void common_init(void){
    logs = fopen("logs.txt", "a");

    fprintf(logs, "Common initialization started.\n");

    Vg1 = 1;
    Vg2 = 2;
    counter = 0;

    MErr();

    fprintf(logs, "Common initialization finished.\n");
}
