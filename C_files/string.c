#include<stdio.h>
#include<string.h>
int xstrlen(char name[]);
int xstrcpy(char target[],char source[]);
int main()
{
  char name[20];
  char target[20];
  int lenght;
  printf("Enter string \n");
  scanf("%s",name);
  lenght = xstrlen(name);
  printf("lenght of the string is :%d",lenght);
  xstrcpy(target,name);
  printf("%s",target);
  
  return 0;
  }
  int xstrlen(char name[]);
  int xstrcpy(char target[],char source[])
  {
    int i;
    for(i=0;source[i]!='\0';i++)
      {
       target[i]=source[i];
       }
       target[i]='\0';
  } 
