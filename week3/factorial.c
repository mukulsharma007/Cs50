#include<stdio.h>
#include<cs50.h>
int factorial(int num);
int main(void)
{
int num=get_int("enter the number\n");
printf("%i",factorial(num));
}

int factorial(int num)
{   if(num==1){
    return 1;
}
    return num*factorial(num-1);
}