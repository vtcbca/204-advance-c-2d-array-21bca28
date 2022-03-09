/*WRP to enetr 5 string and print it in sorting order*/
#include<stdio.h> 
#include<string.h> 
#include <conio.h>
void main()
{ 
    int i,j; 
    char str[5][20],temp[20];   
    for(i=0;i<5;i++) 
    {
        printf("\n Enter the string a[%d]:",i);
        gets(str[i]); 
    }
    clrscr();    
    printf("\n Enetr string:");
    printf("\n--------------------------");
    for(i=0;i<5;i++) 
    {
        printf("\n %s",str[i]);
    }
    for(i=0;i<5;i++)
    { 
        for(j=i+1;j<5;j++)
        { 
            if(strcmp(str[i],str[j])>0)
            { 
                strcpy(temp,str[i]); 
                strcpy(str[i],str[j]); 
                strcpy(str[j],temp); 
            } 
        } 
    }
    printf("\n------------------------");
    printf("\n Order of Sorted Strings:"); 
    for(i=0;i<5;i++)
    {
        printf("\n");
        puts(str[i]); 
    }
    getchar(); 
}
    
       