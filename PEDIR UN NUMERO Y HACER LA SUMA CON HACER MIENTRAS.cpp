#include<stdio.h>
#include<conio.h>
int N, x, suma=0;
int main()
{
	printf("programa con ciclo do-while\n");
	printf("escribe el nombre:");
	scanf("%i",&N);
	x=0;
	do
	{
		x++;
		printf("%i\n",x);
		suma=suma+x;
	}
	while(x<=N);
	printf("la suma de los numeros es:%i",suma);
    getch();
}
