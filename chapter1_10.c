#include <stdio.h>


#define TAB_RANGE 4
#define MAX_LIMIT 1000




void detab(){
	int c;
	int pos = 0;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			for(int i = 0; i<TAB_RANGE - (pos%8); i++){
				putchar(' ');
			}
			pos = 0;
		}else if(c == '\n'){
			putchar(c);
			pos = 0;
		}else{
			putchar(c);
			pos++;
		}
	}
}


void entab(){
	int c;
	int space_counter = 0;
	int tab_counter = 0;
	int pos = 0;
	while((c= getchar()) > 0){
		if(c == ' '){
			space_counter++;
			if((pos+1)%TAB_RANGE == 0){
				tab_counter++;
				space_counter = 0;
			}
		}else if(c == '\n'){
			putchar(c);
			pos = 0;
			continue;
		}
		else{
			for(int i = 0; i<tab_counter; i++){
				putchar('\t');
			}
			tab_counter = 0;
			for(int i = 0; i<space_counter; i++){
				putchar(' ');
			}
			space_counter = 0;
			putchar(c);
		}
		pos++;
	}
}


#define N_COLUMNS 20

void fold(){
	int c;
	int blankIdx = -1;
	int pos = 0;

	char str[N_COLUMNS+1];
	char overlap[N_COLUMNS];

	while((c = getchar()) != EOF){
		
		//case when we are still in limit
		if(pos < N_COLUMNS){
			//save the idx of last blank
			if(c == ' '){
				blankIdx = pos;
			}
			//handle newline and reset idx
			else if(c == '\n'){
				blankIdx = -1;
				str[pos] = '\0';
				pos = 0;
				printf("%s", str);
				putchar('\n');
				continue;
			}
			str[pos] = c;

		}else{ //out of limit
			if(c != '\t' && c != ' '){
				//if blank idx != -1 it means that we can cut the word
				if(blankIdx != -1){
					for(int i = 0; i<N_COLUMNS-blankIdx; i++){
						overlap[i] = str[blankIdx+i];
						str[blankIdx] = '\0';
					}
					printf("%s", str);
					putchar('\n');

					int i = 0;
					for( ; i < N_COLUMNS-blankIdx; i++){
						str[i] = overlap[i]; 
					}
					pos = i;
					blankIdx = -1;
				
				}
				else{ //else we must just cut the word as it is
					str[pos] = '\0';
					printf("%s", str);
					putchar('\n');
					pos = 0;
					blankIdx = -1;
				}
				str[pos] = c;
			}else{
				str[pos] = '\0';
                printf("%s", str);
                putchar('\n');
                pos = 0;
                blankIdx = -1;
                continue;
			}
		}
			pos++;
	}

}

int main(){

	//detab();
	//entab();

	fold();
	return 0;
}