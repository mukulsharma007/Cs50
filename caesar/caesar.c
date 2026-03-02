#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int conversion(string s);//convert CLA into number;
string cipher(string a, int key);
int main(int argc, string argv[])
{
if(argc==2){
    int number=conversion(argv[1]);
    if(number<0){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    else{
        //code here;

        string b=get_string("Plaintext :\n");
         printf("ciphertext: %s\n",cipher(b,number));
         return 0;
    }
}
else
{
    printf("Usage: ./caesar key\n");
    return 1;
}
}





































string cipher(string a, int key)
{
 int len=strlen(a);

 for(int i=0;i<len;i++)
 {
    if((a[i]==' ')||(ispunct(a[i]))){
        continue;
    }
    else if((a[i]>=65)&&(a[i]<=90))
    {   int n=0;
        n=((a[i]-65)+key)%26;
        a[i]=65+n;
        }
        else if((a[i]>=97)&&(a[i]<=122))
    {   int m=0;
        m=((a[i]-97)+key)%26;
        a[i]=97+m;
        }
 }
 return a;
}












int conversion(string s)
{
int len=strlen(s);
int m[len],i,number=0,j;
for( i=0;i<len;i++){
if((s[i]>=48)&&(s[i]<=57))
{
m[i]=s[i]-48;
}
else
{
    return -1;
}
}
for(j=0;j<len;j++){
    number=m[j]+number*10;


}
return number;
}