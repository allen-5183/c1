#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert();
void list1();

struct student1
{
	int id;	               /* ID���X */
	char name[10];	       /* �ǥͩm�W */
	double score;	       /* �ǥͤ��� */
	struct student1 *next;  /* ���V�U�@���쵲 */
};

/* �w�q���c���СAhead���V�Ĥ@���쵲 */
struct student1 *head, *ptr;

void ex_4c()
{
	char option;
	head = (struct student1 *) malloc(sizeof(struct student1));
	//���]�쵲��C�� head �ҫ��V���`�I���s����,�ҥH�t�m�O���餧��, �u�N NULL ���w�� head->next 
	head->next = NULL;    /* head���V���`�I���s������ */

	do
	{
		/* �ϥοﶵ���ϥΪ̿�ܷs�W�B�C�L�ε��� */
		printf("\n1 => �s�W�@�`�I\n");
		printf("2 => �C�L��C���Ҧ��`�I\n");
		printf("3 => ����\n");
		printf("�п�ܤ@����: ");
		option = getchar();  /* ��J�ﶵ */
		//puts("");            /* ���� */
		switch (option)
		{
		case '1':	insert();
			break;
		case '2':	list1();
			break;
		case '3':	printf("Bye bye!!");
			break;
		default:	printf("Option error!!\n");
		}
	} while (option != '3');  /* ��ܬ�3�h���X�j�� */
	return 0;
}

/* �w�qinsert( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �s�W�@����Ʃ��쵲��C���e�� */
void insert()
{
	/* �Hmalloc( )��ưt�m�A��O���鵹 ptr �����ܼ� */
	ptr = (struct student1 *) malloc(sizeof(struct student1));

	printf("\n<< Creating student1 data >>\n");
	printf("student1 ID <int> : ");
	//�ϥΪ̿�J��� 
	scanf("%d", &ptr->id);

	printf("student1 name <string> : ");
	scanf("%s", ptr->name);

	printf("student1 score <double> : ");
	scanf("%lf", &ptr->score);

	/* �[���쵲��C���e�ݪ��B�J */
	ptr->next = head->next;
	head->next = ptr;
}

/* �w�qlist1( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �C�L��Ʃ�ù� */
void list1()
{
	struct student1 *current;
	if (head->next == NULL)
		printf("The linked list1 is empty\n");
	else
	{
		current = head->next;       /* �Nnode���Vhead */
		printf("\n<< list1ing student1 data >>\n");

		while (current != NULL)     /* �C�L��ƪ���current���ū��� */
		{
			printf("%-10d %-10s %-10.2f\n", current->id, current->name, current->score);
			current = current->next;
		}
	}
}