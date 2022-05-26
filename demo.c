#include <stdio.h>

int f1(){
 printf("Project1: kim - han - vinh");
}
int minus(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Minus: %d", a-b);	
};
int main()
{
	int a, b;
    printf("Hello F-Code:\n");
    f1();
    minus();
    return 0;
}
