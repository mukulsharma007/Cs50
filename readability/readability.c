#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include <math.h>

int count_letters(string s);
int count_words(string s);
int count_sentences(string s);


int main(void)
{
string k=get_string("TEXT: ");
float l=(count_letters(k)/(float)count_words(k))*100;
float s=(count_sentences(k)/(float)count_words(k))*100;
float res=0.0588 * l- 0.296 * s - 15.8;
int b=(int)round(res);
if(b>=16){
    printf("Grade 16+\n");
}
else if(b<1){
    printf("Before Grade 1\n");
}
else{
    printf("Grade %i\n",b);
}
}

int count_letters(string s)
{
int len=strlen(s);
char c;
int count=0;
for(int i=0;i<len;i++)
{
c=toupper(s[i]);
if((c>=65)&&(c<=90))
count++;
}
return count;
}

int count_words(string s)
{
    int count=0;
int len=strlen(s);
for(int i=0;i<len;i++){
    if(s[i]==' '){
        count++;
    }
}
return count+1;
}
int count_sentences(string s)
{
int count=0;
int len=strlen(s);
for(int i=0;i<len;i++){
    if((s[i]=='.')||(s[i]=='!')||(s[i]=='?')){
        count++;
}
}
return count;
}