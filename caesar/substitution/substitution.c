#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<string.h>
int repeated(string k);
int number(string k);
string cipher(string k, string t);
int invalid(string k);
int main(int argc, string argv[])
{
if(argc!=2)
{
    printf("./substitution key\n");
    return 1;
}
int len=strlen(argv[1]);
if(len!=26)
{
    printf("Key must contain 26 characters.\n");
    return 1;
}
int m=repeated(argv[1]);
if(m){
    printf("Key must not contain repeated characters\n");
    return 1;
}
int n=number(argv[1]);
if(n){
    printf("key must not contain numbers\n");
    return 1;
}
if(invalid(argv[1])){
    printf("invalid characters\n");
    return 1;
}
else{
    string s=get_string("plaintext:");
    printf("ciphertext: %s\n",cipher(argv[1],s));
    return 0;
}
}













int invalid(string k)
{
    int len=strlen(k);
    for(int i=0;i<len;i++){
    if((ispunct(k[i]))||(!(isalnum(k[i]))))
    {
        return 1;
    }
}
return 0;
}












int repeated(string k){
int len=strlen(k);
for(int i=0;i<len;i++)
{
    k[i]=toupper(k[i]);
    for(int j=i+1;j<len;j++)
    {
        k[j]=toupper(k[j]);
        if(k[i]==k[j]){
            return 1;
        }
    }
}
return 0;
}




int number(string k)
{
int len=strlen(k);
for(int i=0;i<len;i++)
{
    if((k[i]>=48)&&(k[i]<=57)){
        return 1;
    }
}
return 0;
}



string cipher(string k, string t)
{
int len1=strlen(t);
int len2=strlen(k);
for(int i=0;i<len1;i++){
if((t[i]==' ')||(ispunct(t[i]))||(isdigit(t[i])))
{
    continue;
}
else
{
if((t[i]>=65)&&(t[i]<=90)){
    int n=(t[i]-65)%26;
    t[i]=toupper(k[n]);
}
else{
    int h=(t[i]-97)%26;
    t[i]=tolower(k[h]);
}
}
}
return t;
}







