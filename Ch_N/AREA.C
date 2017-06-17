#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    float area, radious, pi;
    pi = 3.14159;

    printf("\nDo you want to calculate area?(y/n): ");
    ch = getchar();
    ch = toupper(ch);

    while(ch != 'N'){
    
    printf("Tell me the radious?: ");
    scanf("%f", &radious);
    area = pi * radious * radious;

    printf("\nArea of the circle is %.2f", area);
    
    return 0;
    
    }


}
