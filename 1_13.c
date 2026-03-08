#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c;
    int arr[20];
    int counter = 0;
    int state = OUT;
    for(int i = 0; i < 20; ++i){
        arr[i] = 0;
    }
    
    while((c = getchar()) != EOF){
        //out of word
        if(c == '\n' || c == '\t' || c == ' '){
            if(state == IN){
                //if we were in word we go outside and
                //increase arr idx corresponding to word length
                state = OUT;
                arr[counter]++;
                counter = 0;
            }
            //if we were find letter we go inside word
            //and increase counter to count word length
        }else{
            state = IN;
            counter++;
        }
    }

    for(int i = 0; i < 20; ++i){
        printf("%2d: ", i);
        for(int j = 0; j < arr[i]; ++j){
            printf("|");
        }
        printf("\n");
    }
    return 0;
}