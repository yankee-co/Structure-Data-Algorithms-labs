#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "M1.h"
#include "MErr.h"

void S4();
void S8();

void S4(void){

    fprintf(logs, "S4 started\n");
    MErr();
    S8();
    fprintf(logs, "S4 finished\n");

}

void S8(void){
    
    while (counter < 3)
    {
        fprintf(logs, "S8 started\n");
        MErr();
        S1();
        fprintf(logs, "S8 finished\n");
    }

}

