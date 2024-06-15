#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "M2.h"
#include "M3.h"
#include "MErr.h"

void S1(void){
    counter++;
    fprintf(logs, "S1 started\n");
    S4();
    MErr();
    fprintf(logs, "S1 finished\n");

}

void S2(void){
    fprintf(logs, "S2 started\n");
    MErr();
    S5();
    S6();
    fprintf(logs, "S2 finished\n");

}

void S3(void){
    fprintf(logs, "S3 started\n");
    MErr();
    S7();
    fprintf(logs, "S3 finished\n");
}