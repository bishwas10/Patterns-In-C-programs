/* print the pascal's triangle using C programming 
      1
     1  1
    1  2  1
  1   3  3  1
1    4  6  4 1    */
#include <stdio.h>
int main ()
{
    int i ,j ,k, row = 5,c = 1;
 
    for ( i = 0; i <row; i++)
    {
        for ( k = 1 ; k <=row-i; k++)
        printf ( " ");
        for ( j = 0 ; j <= i; j++)
        {
            if ( i ==0 || j == 0)
          c = 1;
          else
          {
          c = c* (i-j+1)/j;
          printf ("%4d ",c);
          }    
        }
        
        printf ("\n");
            
        return 0;
    }
}
