#include <stdio.h>

int main()
{
	char aa;
	aa = 'a';
	printf("Isto e um aa %c \n", aa);
	printf("Isto e um &aa %s \n", &aa);
	
	char *bb;
	bb = &aa;
	printf("Isto e um bb %p \n", bb);	
	printf("Isto e um &bb %p \n", &bb);	
	printf("Isto e o *bb  %d  \n", *bb);

	char xx[] = "Hello";
	printf("Isto e um xx %s \n", xx);
	printf("Isto e um &xx %p \n", &xx);
	printf("Isto e um *xx %c \n", *xx);
	
	char *zz;
	zz = xx;
	printf("Isto e um zz %p \n", zz);	
	printf("Isto e um &zz %p \n", &zz);	
	printf("Isto e o *zz  %d  \n", *zz);
	
	char *tt = "Hello";
	printf("Isto e um tt %s \n", tt);	
	printf("Isto e um &tt %p \n", &tt);	
	printf("Isto e o *tt  %d  \n", *tt);
	return 0;
}
