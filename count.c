#include <stdio.h>

int main(){
    int char_count = 0;
    int line_count = 0;
    int blank_counter = 0;
    int tab_counter = 0;

    int c;

    while((c = getchar()) != EOF){
        if(c == ' ')
            ++blank_counter;
        if(c == '\t')
            ++tab_counter;
        if(c == '\n')
            ++line_count;
        
    }

    printf("Characters: %d\n", char_count);
    printf("Lines: %d\n", line_count);
    printf("Blanks: %d\n", blank_counter);
    printf("Tabs: %d\n", tab_counter);
    

    return 0;
}