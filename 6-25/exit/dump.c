 ///
 /// @file    dump.c
 /// @author  gsw(1499186594@qq.com)
 ///
   
#include "func.h"

void print()
{
	printf("I am print\n");
	char *p = NULL;
	*p = 5;
}

int main()
{
	printf("I am main\n");
	print();
	printf("after print\n");
	return 0;
}

