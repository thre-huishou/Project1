#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"


void initStack(struct STack * ps)
{
	assert(ps != NULL);
	ps->pTop = ps->pBottom = (SNode*)malloc(sizeof(SNode));
	if (ps->pBottom == NULL)
	{
		printf("%s", strerror(errno));
		return ;
	}
	ps->pBottom->i = 0;
	ps->pBottom->next = NULL;
}

SNode* addSNode(DataType i)
{
	SNode* tmp = (SNode*)malloc(sizeof(SNode));
	if (tmp == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	tmp->i = i;
	tmp->next = NULL;
	return tmp;
}

void print(struct STack * ps)
{
	SNode*tmp = ps->pTop;
	if (tmp == ps->pBottom)
	{
		printf("¿ÕÕ»£¡\n");
	}
	else
	{
		while (tmp !=ps->pBottom)
		{
			printf("%d->", tmp->i);
			tmp = tmp->next;
		}
		printf("NULL\n");
	}

}

void pushStack(struct STack * ps, DataType i)
{

	struct STack * tmp=ps;
	SNode* top = addSNode(i);
	top->next=tmp->pTop;
	tmp->pTop=top;
}

void popStack(struct STack * ps)
{
	if (ps->pTop == ps->pBottom)
	{
		printf("¿ÕÕ»!\n");
		return;
	}
	else
	{
		SNode* top = ps->pTop;
		ps->pTop = top->next;
		free(top);
		top = NULL;
	}
}