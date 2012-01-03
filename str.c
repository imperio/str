#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int main()
{
    char str[max];
    int i,k=0;
    
    printf("kelimeyi giriniz:");
    gets(str);
    i=strlen(str);
    
    while(i>0)
{
    
               for(;str[k]!='\0';k++){
               putchar(str[k]);
              
               }
               k=k-(i-1);
               
               i--;
               putchar('\n');

}

system("pause");
return 0;
}               
               
