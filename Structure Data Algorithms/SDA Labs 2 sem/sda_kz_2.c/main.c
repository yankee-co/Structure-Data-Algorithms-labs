#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "M1.h"

int main(){
    logs = fopen("logs.txt", "w");
    fprintf(logs, "Main started.\n");

    common_init();
    
    F1_1(); 
    F1_2();

    fprintf(logs, "Main finished.\n");

    fclose(logs);
    return 1;
}