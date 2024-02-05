#include<stdio.h>
#include<conio.h>
int c,s,p,x;
int main()
{
	printf("programa que pide 10 numeros y calcule el promedio mediante ciclo for\n");
	s=0;
	for(x=1;x<=10;x++);
	{
	printf("escriba calificacion:");
	scanf("%i",&c);
	s=s+c;
	}
	p=s/10;
	printf("el promedio es:%i",p);
	getch();
}
