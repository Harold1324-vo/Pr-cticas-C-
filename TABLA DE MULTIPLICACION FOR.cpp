#include<stdio.h>
#include<conio.h>
int n,r,x;
int main()
{
	printf("Programa que pida un numero y que imprima la tabla de multiplicacion de ese numero\n");
	printf("Escriba el numero deseado:");
	scanf("%i",&n);
	for(x=1;x<=10;x++)
	{
		r=(n*x);
		printf("%i\n",r);
	}
	getch();
}
