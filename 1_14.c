#include <stdio.h>

int main(){
    int c;
    int arr[128];

    for(int i = 0; i<128; i++){
        arr[i] = 0;
    }

    while((c = getchar()) != EOF){
       if(c >= 0 && c <128){
            ++arr[c];
       }
    }

    for(int i = 0; i<128; i++){
        printf("%c: ", i);
        for(int j = 0; j<arr[i]; j++){
            printf("|");
        }
        printf("\n");
    }

    return 0;
}