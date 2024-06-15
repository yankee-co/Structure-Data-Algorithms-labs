#include "preview.h"
#include <time.h>

void show_matrix(int size1, int size2, char matrix[size1][size2]){
    Sleep(8);
    system("cls");
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void empty(int size1, int size2, char matrix[size1][size2]){
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            matrix[i][j] = '.';
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void fill(int size1, int size2, char matrix[size1][size2]){

    void go_down(int *X, int *Y){
        if (*Y == 0){
            while(*X < size1 - 1){
                *X=*X+1;
                *Y=*Y+1;
                matrix[*X][*Y] = '#';
                show_matrix(size1, size2, matrix);
            } 
        }
        else if (*X == 0){ // size1 = 5 size2 = 8
            if(*Y < size2 - size1){
                while(*X < size1 - 1){
                    *X=*X+1;
                    *Y=*Y+1;
                    matrix[*X][*Y] = '#';
                    show_matrix(size1, size2, matrix);
                }
            }
            else{
                while(*Y < size2 - 1){ //while(Y < 7)
                    *X=*X+1;
                    *Y=*Y+1;
                    matrix[*X][*Y] = '#';
                    show_matrix(size1, size2, matrix);
                }
            } 
        }
    }

    void go_up(int *X, int *Y){
        if (*Y < size1){
            while(*Y > 0){
                *X = *X - 1;
                *Y = *Y - 1;
                matrix[*X][*Y] = '#';
                show_matrix(size1, size2, matrix);
            }
        }
        else if (*Y >= size1){
            while(*X > 0){
                *X = *X - 1;
                *Y = *Y - 1;
                matrix[*X][*Y] = '#';
                show_matrix(size1, size2, matrix);
            }
        }
    }

    // int X = size1 - 1; 
    // int Y = 0;

    int X = size1-1;
    int Y = 0;
    
    matrix[X][Y] = '#';
    show_matrix(size1, size2, matrix);

    // while(X != 0 && Y != size2 - 1){
    for (int i = 0; i < size1 * size2; i++){

        // if (X == size1 - 1 && Y == size2 - 2) Y++;

        if (X > 0 && X < size1 - 1 && Y == 0){ // left
            if (X % 2 != 0){ // step up
                X = X - 1;
                matrix[X][Y] = '#';
                show_matrix(size1, size2, matrix);
            }
            else go_down(&X, &Y);
        }

        if (Y == size2 - 1 && X > 0 && X < size1 - 1){ // right
            if (X % 2 == 0)go_up(&X, &Y);
            else{
                X = X - 1; // step up
                matrix[X][Y] = '#';
                show_matrix(size1, size2, matrix);
            }
        }

        if (X == 0 && Y >= 0 && Y <= size2 - 1){ // top
            if (Y % 2 == 0) go_down(&X, &Y);
            else{
                Y = Y + 1; //step right
                matrix[X][Y] = '#';
                show_matrix(size1, size2, matrix);
            }
        }

        if (X == size1 - 1 && Y >= 0 && Y <= size2 - 1){ // bottom
            if (Y % 2 == 0){
                Y = Y + 1;
                matrix[X][Y] = '#';
                show_matrix(size1, size2, matrix);
            }
            else{
                go_up(&X, &Y);
            }
        }
        
    }
}

int main(){
    int size1 = 9, size2 = 14;

    char matrix[size1][size2];

    empty(size1, size2, matrix);
    fill(size1, size2, matrix);

    getchar();

    return 0;
}