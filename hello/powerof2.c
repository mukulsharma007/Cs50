#include<stdio.h>
#include<cs50.h>
int main(void){
    int size;
    do{
        size=get_int("enter the size\n");
        }while(size<1);
    int arr[size];
    arr[0]=1;
    printf("%i\n",arr[0]);
    for(int i=1;i<size;i++){
        arr[i]=arr[i-1]*2;
        printf("%i%i\n", i ,arr[i]);
    }
}