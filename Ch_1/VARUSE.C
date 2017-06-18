#include <stdio.h>

int main(){

    int num1, num2;
    int mul = num1 * num2; //Will save garbage value since num1 and num2 not assigned

    printf("\nEnter 1st number: ");
    scanf(" %d", &num1); //Take int and assign it to ADDRESS OF(&) num1

    printf("\nEnter 2nd number: ");
    scanf(" %d", &num2);
    mul  = num1 * num2;
    printf("\n%d * %d  = %d\n",num1,num2,mul);

    return 0;




}
