/*Calcular el �rea de un rect�ngulo con funciones Tarea*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int area(int a,int b);
int perimetro(int a, int b);

int main(){
int b,a;
	printf("Base del rect�ngulo: ");
	scanf("%d",b);
    printf("Altura del rect�ngulo: ");
	scanf("%d",a);

    printf("el resultado del area del rect�ngulo es A=%d\n",area(a,b));
  
    printf("el resultado del perimetro del rect�ngulo es P=%d\n",perimetro(a,b));
    
	return 0;
}


int perimetro(int a,int b){
	int perimetro=(b+b+a+a);
    return perimetro;
}

int area(int a,int b){
	int area=(a*b);
    return area;
}






