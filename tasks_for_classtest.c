#include <stdio.h>
#include <stdlib.h>

void program(){
    char numbers[] = "0123456789";
    int row_count = 6;
    int column_count = 50;

    for(int row = 0; row<row_count; row++){
        for(int column = 0; column<column_count; column++)
        {   
            printf("%c", numbers[column%10]);
            if(row > 0){
               for(int i = 0; i<row;i++){
                   if(column < column_count-1){
                    printf("-");
                    column_count--;
                   }
               } 
            }
            
        }
        column_count=50;
        printf("\n");
    }
}

int main(){
    program();
}