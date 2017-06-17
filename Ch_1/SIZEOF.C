#include <stdio.h>

int main(){

    printf("Char takes %d bytes\n",int(sizeof(char)));
    printf("Integer takes %d bytes\n",int(sizeof(int)));
    printf("Float takes %d bytes\n",int(sizeof(float)));
    printf("Double takes %d bytes\n",int(sizeof(double)));
    printf("Long int takes %d bytes\n",int(sizeof(long int)));
    printf("Long long int takes %d bytes\n",int(sizeof(long long int)));
    printf("Long double takes %d bytes\n",int(sizeof(long double)));


    return 0;

}



