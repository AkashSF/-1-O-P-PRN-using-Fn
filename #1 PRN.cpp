#include<stdio.h>
long long int receive()
{
	long long int b;
	printf("Enter PRN: ");
	scanf("%lld", &b);
	return b;
}

int main()
{
	long long int a;
	a=receive();
	printf("Entered PRN: %lld", a);
	return 0;
}
