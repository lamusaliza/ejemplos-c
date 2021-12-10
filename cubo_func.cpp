#include<stdio.h>
#include<math.h>
int cubo(int n);

int main()
{
	int n=2;
	int result=cubo(n);
	printf(" El resultado del numero %d elevado al cubo es %d ",n,result);
	
	return 0;
}

int cubo(int n)
{
	int result=pow(n,3);
	return result;
}
