#include<stdio.h>

int xstrlen(char arr[]);
void xstrcpy(char[],char[]);
int xstrcmp(char[],char[]);

int main()
{
    int length,cmp;
    char arr[100],target[100],arr1[100];
    printf("Enter a string");
    scanf("%s",arr);
    length = xstrlen(arr);
    printf("\n Length of the string is %d",length);
    xstrcpy(target,arr);
    printf("\n Copied string %s",target);
    printf("\n Enter another string");
    scanf("%s",arr1);
    cmp= xstrcmp(arr1,arr);
    if(cmp==1)
    {
        printf("Both the strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }

    return 0;

}

int xstrlen(char arr[])
{
    int i;
    for(i=0;arr[i]!='\0';i++)
    {}
    return i;
}

void xstrcpy(char target[],char source[])
{   
    int j;
    for(j=0;source[j]!='\0';j++)
    {
        target[j]=source[j];
    }
    target[j]='\0';
}

int xstrcmp(char a[],char b[])
{
    int i,flag;
    for(i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
        flag = 0;
        break;
        }
        flag = 1;
        
    }
    if(flag==1){
    return 1;
    }
    else
    {
        return 0;
    }
}