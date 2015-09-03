#include <stdio.h>

void func(void)
{
	printf("func\n");
	printf("Changes before applying patch-1 :hello_1_world\n");
}

int main()
{
	printf("hi\n");
	func();
	return 0;
}

