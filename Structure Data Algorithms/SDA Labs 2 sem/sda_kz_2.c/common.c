    #include <stdlib.h>
    #include <stdio.h>
    #include "common.h"

    FILE * logs;

void common_init(void){
    logs = fopen("logs.txt", "a");

    fprintf(logs, "Common initialization started.\n");

    fprintf(logs, "Common initialization finished.\n");
}
