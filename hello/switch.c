#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int a=get_int("enter first number\n");
    int b=get_int("enter second number\n");
    char c=get_char("enter the operation\n");
    switch(c)
    {
        case '+':
        printf("%d\n",a+b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '/':
        printf("%d\n",a/b);
        break;
        case '%':
        printf("%d\n",a%b);
        break;
        default:
        printf("wrong choice\n");
    }
}