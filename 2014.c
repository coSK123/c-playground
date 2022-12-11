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


/* eine for Schleife in eine while Schleife umwandeln. Eine Variable definieren und initalisieren 
dann die while Schleife schreiben in die Klammern kommt der Ausdruck, der in der for-Schleife in der Mitte steht. Dann kommt das was getan werden soll
und am Ende der Schleife wird die Läufervariable hoch gezählt*/

/* Do while einfach die Läufervariable in den DO teil schreiben und dann den Rest gleich lassen*/

/*fehlerhafte Stellen

char name[], str[20];  Hier name mit einem Wert initalisieren z.B. 20 sollte für einen Namen reichen
char text [5]= „Hallo“; Die 5 wäre nícht notwendig ist aber auch nicht falsch
scanf(„%d“, name); Hier auch kein Fehler aber eventuell die Menge der Zeichen die eingegeben werden könne beschränken
str=“wie geht’s?“;
printf(„%s,%s,%s“, text, name); Hier fehlt die Angabe für die Textersetzung beim 3. %s sinnvoll wäre hier text,name, str);*/

/* einfache und doppelte Anführungszeichen

Einfache Anführungszeichen sind für einzelne Characters Beispielsweise 'a', schreibt man "a" so ist das für c ein string literal und damit
ein character array mit a und dem 0-byte also \0
Ansonsten kann man Beispielsweise bei printf("") doppelte und einfache Anführungszeichen benutzen, benutzt man doppelte Anführungszeichen kann
man einfache Anführungszeichen im Text verwenden, was besonders in der englischen Sprache hilfreich ist.
*/


void floater(int n){
    float *ptr;
    ptr = malloc(n*sizeof(float));
    if(ptr){
    for(int i = 0;i<n;i++){
        ptr=ptr+i*sizeof(float);
        *ptr = (float) 2*(i+1);
        printf("%f\n", *ptr);
    }
     free(ptr);
    }
    else 
        printf("could not allocate");
    
    
}
/* Das Programm erhält Zugriff auf den Speicher über malloc und die dem Pointer zugewiesene Adresse
 Wenn der Speicher nicht mehr benötigt wird sollte dieser wieder freigegeben werden über free(ptr); 
 sonst bleibt dieser belegt, bis das Programm terminiert*/






int main(){
    program();
    
    int a = 13; //13
    printf("%d\n",a);
    a= a/2*4;   //24
    printf("%d\n",a);
    a>>=1; //12
    printf("%d\n",a);
    a=a*(int)1.3; //12
    printf("%d\n",a);
    a= (~a)&15; //3
    printf("%d\n",a);
    a=a>5?a:-a; //-3
    printf("%d\n",a);
    a=!a; //0
    printf("%d\n",a);

    floater(3);

    return 0;
    
}