/* WRP to create matrices and check matrices is diagonal or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,m[3][3],point=0;
    clrscr();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value in Matrices:");
            scanf("%d",&m[i][j]);
        }
    }
    clrscr();   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("\t %d",m[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++) 
    { 
        for(j=0;j<3;j++) 
        { 
            if(i!=j && m[i][j]!=0) 
                { 
                    point=1; 
                    break; 
                } 
         } 
    }
    printf("-------------------------------"); 
    if(point==1) 
        printf("\n\n Given Matrix is not a diagonal Matrix."); 
    else 
        printf("\n\n Given Matrix is a diagonal Matrix.");
    getchar();
}
    
       