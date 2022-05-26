#include <stdio.h>
int f1(){
 printf("Project1: kim - han - vinh");
}
int minus(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Minus: %d", a-b);	
};
void f4(){
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
	int a, b;
    printf("Hello F-Code:\n");
    f1();
    minus();
    f4();
    return 0;
}
