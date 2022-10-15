#include<stdio.h>
#include<string.h>
void main()
{
 char s[50];
 int i,len,flag=1;
 printf("\nEnter string:");
 gets(s);
    len=strlen(s);
 for(i=0;i<len;i++)
    {
     if(s[i]!=s[len-i-1])
     {
      flag=0;
            break;
     }
 }
 if(flag==1)
     printf("\n%s is a palindrome",s);
 else 
     printf("\n%s is not a palindrome",s);
}

