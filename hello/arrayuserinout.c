#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int arr[3];
    arr[0]=get_int("score1 ");
    arr[1]=get_int("score2 ");
    arr[2]=get_int("score3 ");
    printf("%f\n",(arr[0]+arr[1]+arr[2])/(float)3);
}