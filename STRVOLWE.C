#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,c=0;
  char a[4][20];
  clrscr ();
  for (i=0;  i<4; i++)
  {
    printf ("Enter any string:");
    gets(a[i]);
  }
   printf ("------------------------------------------------------------\n");

  for (i=0; i<4; i++)
  {
    for (j=0; j<4; j++)
    {
      if (a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u')
      {
	 c++;
	 printf ("\nstring %d:%c", i,a[i][j]);
      }
    }
  }
   for (i=0;  i<4; i++)
   {
     printf ("\na[%d]:%d", i,c);
   }
 getch ();
}