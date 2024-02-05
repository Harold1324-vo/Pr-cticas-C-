#include<stdio.h>
#include<conio.h>
int n,r,x;
int main()
{
	printf("Programa que pida un numero y que imprima la tabla de multiplicacion de ese numero\n");
	printf("Escriba el numero deseado:");
	scanf("%i",&n);
	x=1;
	do
	{
		r=(n*x);
		printf("%i\n",r);
		x++;
	}
	while(x<=10);
	getch();
}
