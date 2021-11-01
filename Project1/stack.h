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


//初始化
void initStack(struct STack * ps);
//创建新节点
SNode* addSNode(DataType i);
//打印
void print(struct STack * ps);
//增
void pushStack(struct STack * ps, DataType i);
//删
void popStack(struct STack * ps);
//查 
SNode* findStack(struct STack * ps, DataType i);
//改
void doStack(struct STack * ps);