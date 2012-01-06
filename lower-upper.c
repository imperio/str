#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define max 20
void kucukbuyuk(char s[])
{
          int i;
          for(i=0;s[i]!='\0';i++){
          s[i]=isupper(s[i])? tolower(s[i]) : toupper(s[i]);
          putchar(s[i]);
          
          }
          }
void tumubuyuk(char s[])
{ 
        int i;
        for(i=0;s[i]!='\0';i++){
        s[i]=islower(s[i]) ? putchar(toupper(s[i])) : putchar(s[i]);
    }
}
void tumukucuk(char s[])
{ 
        int i;
        for(i=0;s[i]!='\0';i++){
        s[i]=isupper(s[i]) ? putchar(tolower(s[i])) : putchar(s[i]);
    }
}
void sadeceilkharfibuyuk(char s[])
{
     int i;
     s[0]=islower(s[i]) ? putchar(toupper(s[0])) : putchar(s[i]);
     for(i=1;s[i]!='\0';i++)
     s[i]=isupper(s[i]) ? putchar(tolower(s[i])) : putchar(s[i]);
     }
     
     
int main()
{
    
    int x;
    char s[max],ch;
    printf("kelimeyi giriniz\n");
    gets(s);
    
    printf("menuyu gormek icin 'm' cikmak icin 'e'\n");
    ch=getchar();
    if(ch=='m' || ch == 'M'){
    printf("SECENEKLER \n ____________________________________\n");
    printf("Girilen kelimenin buyuk harflerini kucuk,kucuk harflerini buyuk yapmak icin '1' girin\n");
    printf("Girilen kelimenin tum harflerini kucuk yapmak icin '2'girin\n");
    printf("Girilen kelimenin tum harflerini buyuk yapmak icin '3'girin\n");
    printf("Girilen kelimenin ilk harflerini buyuk yapmak icin '4'girin\n");
    scanf("%d",&x);
    
    switch(x){
              case 1:kucukbuyuk(s);break;
              case 2:tumukucuk(s);break;
              case 3:tumubuyuk(s);break;
              case 4:sadeceilkharfibuyuk(s);break;
              }
              
}
    if(ch=='e' || ch =='E'){
    system("pause");
    return 0;
}
    
    
system("pause");
return 0;
}
    
