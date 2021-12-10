#include<stdio.h>

int main (){
	printf("----- SUMA CON APUNTADORES----");
	int suma;
	int x=17;
	int y=2;
	int *p;
	int *q;
	
	p=&x;
	q=&y;
	
	suma=(*p+*q);
	
	printf("\nLa sumatoria es: ",suma);
}
	
	
