#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "M2.h"
#include "M3.h"

void F1_1(void){
    fprintf(logs, "F1_1 started\n");
    F2();
    fprintf(logs, "F1_1 finished\n");
}

void F1_2(void){
    fprintf(logs, "F1_2 started\n");
    F3();
    fprintf(logs, "F1_2 finished\n");

}
