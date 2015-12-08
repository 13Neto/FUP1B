#include <stdio.h>
char cad[20] = "\0", subc[20]="\0", nsubc[20]="\0";
int lc=0, ls=0, s=0, c, in, g, i;
main()
{
	printf("Ingresa una palabra:\n ");
	scanf("%s",cad);
	for(lc=0; cad[lc] != '\0';lc++)
	{ 
		//Cuenta el numero de caracteres de la cadena principal
	}
	printf("Ingresa la subpalabra que quieres cambiar de la primera palabra:\n ");
	scanf("%s",subc);
	for(ls=0; subc[ls] != '\0';ls++)
	{
		 //Cuenta el numero de caracteres de la subcadena
	}
	printf("Ingresa la palabra por la que se remplazara:\n ");
	scanf("%s",nsubc);
	if(ls <= lc)
	{ //Evalúa que el numero de caracteres de la subcadena no exeda el de la cadena principal 
		while(i<=lc)
		{//Se repetirá este ciclo hasta que termine de leer la cadena principal
		 i++;
			if(cad[i] == subc[s] && subc[s] != '\0')
			{//Evalúa si cad[i] es igual a subc[s], "s" comienza con valor de 0
				s++;//Si se cumple la condición esta una coincidencia entre caracteres entonces se suma 1 a s
				c=i;
			}
			else
			{
				if(cad[i] != '\0' && subc[s] != '\0')
				{
					s = 0;//si el caracter posterior a una coincidencia no coincide con su respectivo, el contador se reinicia a excepcion del caracter null
				}
			}
		}
		
		if( s == ls)
		{ //Si existieron todas las coincidencias de caracteres entonces "s" deberá valer lo mismo que "ls" el cual es el numero confirmado de caracteres de la subcadena
			printf("\nSubcadena %s encontrada",subc);
			
			in = c+1-ls;
			g=0;
			for( i=in; i<=c; i++)
			{
				cad[i] = nsubc[g];
				g++;
			}
			
			printf("\nNueva palabra formada: %s",cad);
		}
		else
		{ //Si las coincidencias son por ejemplo 3 y la subcadena era de 5 caracteres significa que no existe la subcadena
			printf("\nNo existe la subcadena");
		}
	}
	else
	{ // No puede existir una subcadena que contenga mas caracteres que la cadena principal
		printf("Error, %s no puede ser subcadena de %s", subc, cad);
	}
}




