#include <stdio.h>

#define MAX_LIMIT 1000

int getline(char s[]){
    int c;
    int i = 0;
    while((c = getchar()) != EOF && c!= '\n'){
        if(i<MAX_LIMIT-1){
            s[i] = c;
        }
        ++i;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    if(i < MAX_LIMIT){
        s[i] = '\0';
    }else{
        s[MAX_LIMIT -1] = '\0';
    }

    return i;
}

//function to copy one cstring to another
void copy(char from[], char to[]){
    int i = 0;

    while((to[i] = from[i]) != '\0'){
       ++i;
    }
}

void print_over(){
    char str[MAX_LIMIT];
    int len = 0;
    while((len=getline(str)) > 0){
        if(len > 80){
            printf("%s", str);
        }
    }
}


void delete_blanks(){
    char str[MAX_LIMIT];
    int len = 0;
    while((len = getline(str)) > 0){
        printf("%s %d\n", str, len);
        for(int i = len-1; i>=0; i--){ 
            if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                continue;
            if(i >= 0){
                str[i+1] = '\n';
                str[i+2] = '\0';
                break;
            }
        }
        printf("After: %s", str);
    }
}

void reverse(char str[]){
    int idx = 0;
    while(str[idx] != '\n' && str[idx]!= '\0'){
        idx++;
    }
     int copyIdx;
     idx--;
    int changes = (idx+1) / 2;
    for( copyIdx = 0; copyIdx<changes; copyIdx++, idx--){
        char temp = str[copyIdx];
        str[copyIdx] = str[idx];
        str[idx] = temp;
    }
    

    printf("rev: %s", str);

}

int main(){

    // char str[MAX_LIMIT];
    // int len = 0;
    // int max_len = 0;
    // char max_str[MAX_LIMIT];
    // while((len = getline(str)) > 0){
    //     if(len > max_len){
    //         max_len = len;
    //         copy(str, max_str);
    //     }
    // }

    // printf("Max len: %d | Max str: %s", max_len, max_str);

    //print_over();

    //delete_blanks();

    char string[MAX_LIMIT];
    while(getline(string) > 0){
        reverse(string);
    }


    return 0;
}