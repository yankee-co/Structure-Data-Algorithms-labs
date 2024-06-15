#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "MErr.h"

void S4();
void S8();

void S5(void){

    fprintf(logs, "S5 started\n");
    MErr();
    fprintf(logs, "S5 finished\n");

}

void S6(void){
    
    fprintf(logs, "S6 started\n");
    MErr();
    fprintf(logs, "S6 finished\n");

}

void S7(void){
    
    fprintf(logs, "S7 started\n");
    S6();
    MErr();
    fprintf(logs, "S7 finished\n");

}
