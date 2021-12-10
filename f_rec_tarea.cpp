/*Calcular el área de un rectángulo con funciones Tarea*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int area(int a,int b);
int perimetro(int a, int b);

int main(){
int b,a;
	printf("Base del rectángulo: ");
	scanf("%d",b);
    printf("Altura del rectángulo: ");
	scanf("%d",a);

    printf("el resultado del area del rectángulo es A=%d\n",area(a,b));
  
    printf("el resultado del perimetro del rectángulo es P=%d\n",perimetro(a,b));
    
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






