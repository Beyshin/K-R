#include <stdio.h>

int main(){
    int c;
    int flag = 0;


    while((c = getchar()) != EOF){
      if(c!=' '){
        if(flag == 1){
            putchar(' ');
            flag = 0;
        }
        putchar(c);
      }
       else
        flag = 1;
        
    }
    return 0;
}