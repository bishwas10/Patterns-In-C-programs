/* WAP to print thye following patterns using C
      *
    * * *
  * * * * *
* * * * *  * *    */
  #include <stdio.h>
  int main ()
  {
      int i , j ,k, row;
    printf ("Enter the number of rows \n");
    scanf ("%d",&row);
    for ( i = 1 ; i <= row; i++)
    {
        for ( k = 1 ; k <= (row-i); k++)
        {
            printf (" ");
        }
        for ( j = 1; j <=i; j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
      return 0;
  }