#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
int main()
{
	struct STack  s ;
	initStack(&s);
	print(&s);
	pushStack(&s, 1);
	pushStack(&s, 2);
	pushStack(&s, 3);
	pushStack(&s, 4);
	print(&s);
	popStack(&s);
	print(&s);
	return 0;
}