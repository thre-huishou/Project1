#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

typedef int DataType;

typedef struct SNode
{
	DataType i;
	struct SNode* next;
}SNode;

struct STack
{
	SNode * pTop;
	SNode * pBottom;
};


//��ʼ��
void initStack(struct STack * ps);
//�����½ڵ�
SNode* addSNode(DataType i);
//��ӡ
void print(struct STack * ps);
//��
void pushStack(struct STack * ps, DataType i);
//ɾ
void popStack(struct STack * ps);
//�� 
SNode* findStack(struct STack * ps, DataType i);
//��
void doStack(struct STack * ps);