#include<stdio.h>
#include<cs50.h>
int total(int arr[],int size); // calculates sum
float average(int arr[],int size);//calculate average
int main(void)
{
    int size=get_int("Number of weeks taking CS50:\n");
    int arr[size];
    char c;
    for(int i=0;i<size;i++)
    {
        arr[i]=get_int("Week %i HW Hours\n",i);
    }
    do{
        c=get_char("Enter T for total hours, A for average hours per week:\n");
    }while((c!='A')&&(c!='T'));
    if(c=='T'){
        printf("%i",total(arr,size));
    }
    else{
        printf("%.1f", average(arr,size));
    }
}




int total(int arr[],int size)
{   int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

float average(int arr[],int size)
{
    int sum=total(arr,size);
    float avg=(float)sum/size;
    return avg;
}