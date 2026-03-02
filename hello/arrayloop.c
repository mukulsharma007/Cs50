#include<stdio.h>
#include<cs50.h>
int main(void)
{   const int n=3;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        arr[i]=get_int("score %i",i);
        sum=sum+arr[i];
    }
    printf("%f",sum/(float)n);

}