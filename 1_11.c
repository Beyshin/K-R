#include <stdio.h>


int main(){
    int c;
    int state = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(state == 1){
                state = 0;
                putchar('\n');
            }
        }
        else{
            state = 1;
            putchar(c);
        }
    }


}