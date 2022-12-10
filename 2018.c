#include <stdio.h>

void program(){
    int column_count = 15;
    int row_count = 10;
    char symbols[] = "123+";
    
    for(int row = 0; row<row_count;row++){
        for(int column = 0; column<column_count;column++){
            if(row>column){
                printf("%c", symbols[row%4]);
            }
            else
            printf("%c", symbols[column%4]);
            
        }
        printf("\n");
    }
}

int main(){
    program();
}