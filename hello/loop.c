#include<stdio.h>
#include<cs50.h>
int main(void){
    int rem;
    int  c=0;
    for(int a=123;a!=0;a/=10){
    rem=a%10;
    c++;
}
    printf("%d\n",c);
}
