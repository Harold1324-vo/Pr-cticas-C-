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
	while(x>=1)
	{
		f=f*x;
		x--;
	}
	printf("el factorial es:%i",f);
	getch();
}
