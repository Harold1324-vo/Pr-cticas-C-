#include<stdio.h>
#include<conio.h>
int N, x,suma=0; 
int main()
{
	printf("programa con ciclo for\n");
	printf("escribe el numero:");
	scanf("%i",&N);
	for(x=1;x<=N;x++)
	{
		printf("%i\n",x);
		suma=suma+x;
	} 
	printf("La suma de los numeros es: %i",suma);
	getch();
}
