#include <stdio.h>

void test(int i, int k)
{
	int c = i + k;
	printf("%d\n",c);
}


int main()
{
	test(1,2);
	return 0;
}