#include<stdio.h>
#include<cs50.h>
int main(int argc,string argv[])
{
    int i=0;
    for(int j=1;j<=argc;j++)
    printf("%c\n",argv[j][i]);
}