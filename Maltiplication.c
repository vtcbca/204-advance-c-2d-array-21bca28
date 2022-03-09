/* WRP to create 2 matrices and print its maltiplication matrices */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,m1[3][3],m2[3][3],result[3][3],l;
    clrscr();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value of m1:");
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value of m2:");
            scanf("%d",&m2[i][j]);
        }
    }
    clrscr();
    printf("MATRICES-1");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("\t %d",m1[i][j]);
        printf("\n");
    }
    printf("MATRICES-2");
    printf("\n");
    for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
            printf("\t %d",m2[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                result[i][j]=0;
                for(l=0;l<3;l++)
                {
                  result[i][j]=result[i][j]+m1[i][j]*m2[l][j];
                }
            }
    }
    printf("RESULT MATRICES");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("\t %d",result[i][j]);
        printf("\n");
    }
    getchar();
}
    
       