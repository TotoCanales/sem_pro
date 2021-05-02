/*Alonso Canales Padiila
Practica 18
Menu de conversiones de valores de medida
Ejercicios de selectiva miltiple(switch)*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int opc, cm, m, km, res;
	printf ("Elige 1.metros-centimetros 2.kilometros-metros 3.centimetros-metros 4.metros-kilometros \n");
	scanf("%d", &opc);
	switch (opc)
	
		{
			case 1: printf("Dame los metros para convertir a centimetros \n");
				scanf ("%d", &m);
				res=m*100;
				printf("El total de centimetros es %d\n", res);
				break ;
			
			case 2: printf("Dame los kilommetros para convertir a metros \n");
				scanf ("%d", &km);
				res=km*1000;
				printf("El total de metros es %d\n", res);
				break ;
				
			case 3: printf("Dame los centimetros para convertir a metros  \n");
				scanf ("%d", &cm);
				res=cm/100;
				printf("El total de metros es %d\n", res);
				break ;	
				
					
			case 4: printf("Dame los metros para convertir a kilometros  \n");
				scanf ("%d", &m);
				res=m/1000;
				printf("El total de kilometros es %d\n", res);
				break ;	
				
			
			default :printf ("No es posible hacer la conversion \n");
		}
	return 0;

}
