#include<stdio.h>
#include<conio.h>
int N, x, suma=0;
int main()
{
	printf("programa con ciclo while\n");
	printf("escribe el numero:");
	scanf("%i",&N);
	x=0;
	while(x<=N)
	{
		x++;
		printf("%i\n",x);
		suma=suma+x;
	}
		printf("la suma de los numeros es: %i",suma);
	getch();
}
