#include <stdio.h>

int n1[10], n2[10];
int con=1,aux=1;

main(){
	while(con <=10){
	printf("Ingresa el numero del arreglo  A en la posicion %d: ",con);
	scanf("%d",&n1[con]);
	con++;
	}
	con=1;
	while(con <=10){
	printf("Ingresa el numero del arreglo B en la posicion %d: ",con);
	scanf("%d",&n2[con]);
	con++;
	}
	con=1;
	printf("  A | B  \n");
	while(con <=10){
		while(aux <=10){
			printf("> %d * %d = %d\n",n1[con],n2[aux],n1[con]*n2[aux]);
			aux++;
		}
		aux=1;
		con++;
	}
}
