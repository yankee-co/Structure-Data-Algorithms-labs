#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "M1.h"
#include "MErr.h"

int main(){
    logs = fopen("logs.txt", "w");
    fprintf(logs, "Main started.\n");

    common_init();
    
    S1(); 
    S2();
    S3();

    MErr();

    fprintf(logs, "Main finished.\n");

    fclose(logs);
    return 1;
}