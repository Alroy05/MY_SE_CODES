/* Decimal to Octal conversion*/

#include<stdio.h>
#include<math.h>
int main()
{
    int dec,oct,num,rem,p;

    printf("\nEnter any number");
    scanf("%d",&dec);

    oct=dec;
    p=num=0;
 
    while (dec>0)
    {
        rem=dec%8; //remainder
        dec=dec/8;
        num=num+rem*pow(10,p); //octal conversion
        p++;
    }

    printf("The octal equivalent of %d is %d\n",oct,num);
    
    return 0;

}