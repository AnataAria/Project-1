#include <stdio.h>


int f4(){
    int firstNum = 0;
    int secondNum = 0;
    printf("first num input:");
    scanf("%d",&firstNum);
    printf("\nSecond num input:");
    scanf("%d",&secondNum);
    
    printf("Tich cua num 1 va 2 la: %d", firstNum * secondNum);

}

int main()
{
    printf("Hello F-Code:\n");
    f4();
    return 0;
}