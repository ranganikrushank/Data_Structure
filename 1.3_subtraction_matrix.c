#include <stdio.h>
 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("\n Enter the row = ");
   scanf("%d",&m);
   printf("\n Enter the columns = ");
   scanf("%d",&n);
   printf("\n Enter the elements of first matrix = ");
 
    for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
    scanf("%d", &first[c][d]);
 
   printf("\n Enter the elements of second matrix = ");
 
   for (c = 0; c < m; c++)
   for (d = 0 ; d < n; d++)
   scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++) 
      {
        sum[c][d] = first[c][d] - second[c][d];
        printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}