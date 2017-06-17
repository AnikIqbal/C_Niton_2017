#include <stdio.h>

#define RED      "\x1B[31m"
#define GREEN    "\x1B[32m"
#define YELLOW   "\x1B[33m"
#define BLUE     "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN     "\x1B[36m"
#define WHITE    "\x1B[37m"
#define RESET    "\x1B[0m"

#define B_RED      "\x1B[41m"
#define B_GREEN    "\x1B[42m"
#define B_YELLOW   "\x1B[43m"
#define B_BLUE     "\x1B[44m"
#define B_MAGENTA  "\x1B[45m"
#define B_CYAN     "\x1B[46m"
#define B_WHITE    "\x1B[47m"
#define B_RESET    "\x1B[0m"
int main(){
   printf(B_GREEN RED "Monami is Cute.\n" RESET);
   
    return 0;
}
