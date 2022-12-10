#include <stdio.h>
#include <stdlib.h>

void program(){
    int column_count = 53;
    int row_count = 5;
    char symbols[] = "1234567890";
    int index = 0;

    for(int row = 0;row<row_count;row++){
        index = row;
        for(int column = 0; column<column_count;column++){
            for(int i = 0; i<=index-row; i++){
                printf("%c", symbols[index%10]);
                column_count--;
            }
            if(column<column_count-1){
                printf("-");
            }
            index++;
            
        }
        printf("\n");
        column_count = 53;

        
    }
}
int main(){
    program();
}