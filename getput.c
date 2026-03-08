#include <stdio.h>

int main(){
    int c ;

    while((c = getchar()) != EOF){
        putchar(c);
       
    }

    if(c == EOF){
        printf("EOF: %d\n", EOF);
    }

    return 0;
}