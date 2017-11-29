#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert2();
void del();
void list2();

struct student2
{
	int id;	               /* ID���X */
	char name[10];	       /* �ǥͩm�W */
	double score;	       /* �ǥͤ��� */
	struct student2 *next;  /* ���V�U�@���쵲 */
};

/* �w�q���c���СAhead���V�Ĥ@���쵲 */
struct student2 *head, *ptr;

void ex_4d()
{
	char option;
	head = (struct student2 *) malloc(sizeof(struct student2));
	head->next = NULL;    /* head���V���`�I���s������ */
	do
	{
		/* �ϥοﶵ���ϥΪ̿�ܷs�W�B�R���B�C�L�ε��� */
		printf("\n1 => �s�W�@�`�I\n");
		printf("2 => �R���@�`�I\n");
		printf("3 => �C�L��C���Ҧ��`�I\n");
		printf("4 => ����\n");
		printf("�п�ܤ@����: ");
		option = getchar();  /* ��J�ﶵ */
		switch (option)
		{
		case '1':	insert2();
			break;
		case '2':	del();
			break;
		case '3':	list2();
			break;
		case '4':	printf("Bye bye!!\n");
			break;
		default:	printf("Option error!!\n");
		}
	} while (option != '4');  /* ��ܬ�3�h���X�j�� */
	return 0;
}

/* �w�qinsert2( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �s�W�@����Ʃ��쵲��C���e�� */
void insert2()
{
	/* �Hmalloc( )��ưt�m�O���� */
	ptr = (struct student2 *) malloc(sizeof(struct student2));

	printf("\n<< insert2 a student2 data >>\n");
	printf("student2 ID <int> : ");
	scanf("%d", &ptr->id);

	printf("student2 name <string> : ");
	scanf("%s", ptr->name);

	printf("student2 score <double> : ");
	scanf("%lf", &ptr->score);


	ptr->next = head->next;
	head->next = ptr;

}

/* �w�qdel( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �R���쵲��C�e�ݸ�� */
void del()
{
	struct student2 *current;
	current = head->next;

	/* �P�_�쵲��C�O���O�Ū� */
	if (current == NULL)
		printf("The linked list2 is empty !!!\n");
	else
	{
		head->next = current->next;  /*�Q�γo�@�ԭz�N�e�ݪ��`�I�� */
		printf("\n<< Delete a student2 data >>\n");
		printf("%-10d %-10s %-10.2f\n",
			current->id, current->name, current->score);
		free(current);
	}
}

/* 	�w�qlist2( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �C�L��Ʃ�ù� */
void list2()
{
	struct student2 *current;
	if (head->next == NULL)
		printf("No data\n");
	else
	{
		current = head->next;       /* �Nnode���Vhead */
		printf("\n<< list2ing student2 data >>\n");

		while (current != NULL)  /* �C�L��ƪ���current���ū��� */
		{
			printf("%-10d %-10s %-10.2f\n",
				current->id, current->name, current->score);
			current = current->next;
		}
	}
}