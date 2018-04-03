#include<stdio.h>
int main()
{
	//sizeof,deref,address
	int a=1;
	char b='a';
	float c=2.0;
	printf("sizeof a=%d\n value of a=%d\n address of a=%d\n",sizeof(a),a,&a);
	printf("sizeof b=%d\n value of b=%c\n address of b=%d\n",sizeof(b),b,&b);
	printf("sizeof c=%d\n value of c=%f\n address of c=%d\n",sizeof(c),c,&c);
}
