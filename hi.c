#include <stdio.h>

void func(void)
{
	printf("func\n");
	printf("patch - 1: hello_world\n");
}

int main()
{
	printf("hi\n");
	func();
	return 0;
}

