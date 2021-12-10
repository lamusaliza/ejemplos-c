//4.2 Crear un string en C e imprimir todas las letras 'a' de ese string//

#include <stdio.h>
#include <stdlib.h>
 int main (){
char frase[100];
int a=0;
int z;
    
  
   printf("Ingresa una frase:\n");
   gets(frase);            
   
   for (int z=0; z<100; z++){
   	
	   switch(frase[z]){
	 	
   	case 'a':
   		a++;
   		break;}
   	}
   		
   	printf("La cantidad de 'a' son: %d\n",a);
   
	   
	   }

