/* ex7-3b.c */
#include <stdio.h>
#include <stdlib.h>
void ex7_3b( )
{
   /* ��G���}�C���A�A�N��J�ȥѤG���}�C�����X�æL�X */
   int num[2][3];
   int index1, index2;
   /* �H�_���j��B�z�G���}�C��J */
   for(index1 = 0; index1 < 2; index1++)  
      for(index2 = 0; index2 < 3; index2++)
      {
         printf("�п�Jnum[%d][%d]�����: ", index1, index2);
         scanf("%d", &num[index1][index2]);
      }
   printf("\n���G���}�C����Ʀp�U:\n");
   for(index1 = 0; index1 < 2; index1++) 
   {
      for(index2 = 0; index2 < 3; index2++)
         printf("%3d ", num[index1][index2]);
      printf("\n");
   }
   
   //system("PAUSE");    
   //return 0;
}

