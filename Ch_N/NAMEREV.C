#include <stdio.h>
#include <unistd.h>
#define NAME 80
int main(){
    char ch, name[NAME];
    int i;

    printf("Hello! Please type your name: ");

    for(i=0; (ch = getchar()) != '\n'; ++i){
    	name[i] = ch;
    }

    name[i] = '\0';

    printf("\n%s %s %s","Nice to meet you",name,".");
    sleep(3);

    printf("Your name spelled backword is ");
    for( --i; i >= 0; --i){
    	putchar(name[i]);
    }
    printf("\n"); 
    

    return 0;




}
