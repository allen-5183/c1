/* bugs7-2-3.c*/
#include <stdio.h>
#include <stdlib.h>
int main( )
{
   int num[5], count, total=0;
   /* �s���J5�Ӿ�ơA�íp���`�M */
   for(count = 0; count <= 5; count++) 
   {
      printf("Please enter #%d integer: ", count+1);
      scanf("%d", num[count]);   
      total += num[count];
   }
   printf("Input number is ");
   for(count = 0; count <= 5; count++)   
      printf("%d ", num[count]);
   printf("total = %d\n", total);
   system("PAUSE");
   return 0;
}
