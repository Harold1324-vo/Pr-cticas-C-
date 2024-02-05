#include<stdio.h>
#include<conio.h>
int n,s,p,x;
int main()
{
	printf("programa que calcule el promedio de 10 numeros ciclo while\n");
	s=0;
	x=0;
	while(x<=10)
	{
		printf("escriba calificacion:");
		scanf("%i",&n);
		s=s+n;
	}
	p=s/10;
	getch();
}
