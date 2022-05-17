/* WAP to print thye following patterns using C
     *******
      *****
       ***
        *       */
  #include <stdio.h>
  int main ()
  {
      int i , j ,k, row;
    printf ("Enter the number of rows \n");
    scanf ("%d",&row);
    for ( i = row ; i >= 1; i--)
    {
        for ( k = 1 ; k <= (row-i); k++)
        {
            printf (" ");
        }
        for ( j = 1; j <= 2*i-1; j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
      return 0;
  }