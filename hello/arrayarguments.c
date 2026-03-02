#include<stdio.h>
#include<cs50.h>
float average(int arr[]);
int size=3;// when array is paased in a fuction you do not know the size. so we determined it explicitly.
int main(void)
{

int m[size];
for(int i=0;i<size;i++){
    m[i]=get_int("scores \n");
}
printf("%f\n",average(m));
}

float average(int arr[]){
    int sum=0;
for(int i=0;i<size;i++){
sum=sum+arr[i];
}
return sum/(float)size;
}