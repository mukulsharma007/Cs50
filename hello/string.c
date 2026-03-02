#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
  string s=get_string("type your choice\n");
  int len=strlen(s);
  for(int i=0;i<len;i++){
   if(s[i]<s[i-1]){
    printf("no\n");
    return 0;
   }
 }
 printf("yes\n");
 return 0;
}