//Ejercicio 3 Numero impares entre 100 y 133.//

#include <stdio.h>


int main()
{
        int impares,total=0;

        for(impares=100;impares<=133;impares++)
        {
                if(impares%2!=0)
                {
                printf("\n%d",impares);
                total = total + 1;
                }
        }
        printf("\n Son %d n�meros impares los que hay desde el 100 al 133",total);
       
}
