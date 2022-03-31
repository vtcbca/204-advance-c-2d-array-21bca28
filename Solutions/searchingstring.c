/* WRP to enter any string and check it's available ot not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char a[5][10],k[10];
    int i,f=0;
    clrscr();
    for(i=0;i<5;i++)
    {
        printf("\n Enter the string a[%d]:",i);
        gets(a[i]);
    }
    clrscr();
    printf("\n String array is:");
    for(i=0;i<5;i++)
    {
        printf("\n %s",a[i]);
    }
    printf("\n Enter string which you want to serch:");
    gets(k);
    for(i=0;i<3;i++)
    {
        if(strcmp(a[i],k)==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("\nEnter string is available:");
    else
        printf("\nsorry! Enter string is not available:");
    getchar();
    
}   
    
       