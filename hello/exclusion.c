#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int a=5,b=3;
    if(a>b){//here condition is true so the block is executed after that it won't check for any other conditions
        printf("hello\n");
    }
    else if(a%b==2){//when above condition get false then only compiler will check this condition.these brances are mutually exclusive.
        printf("hi\n");
    }

}