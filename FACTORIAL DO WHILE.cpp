#include<stdio.h>
#include<conio.h>
int n,x,f;
int main()
{
	printf("programa que calcule el factorial de un numero while\n");
	printf("escriba el numero:");
	scanf("%i",&n);
	x=n;
	f=1;
	do
	{
		f=f*x;
		x--;
	}
	while(x>=1);
	printf("el factorial es:%i",f);
	getch();
}
