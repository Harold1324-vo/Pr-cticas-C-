#include<stdio.h>
#include<conio.h>
int n,x,f;
int main()
{
	printf("programa que calcule el factorial de un numero for\n");
	printf("escriba el numero:");
	scanf("%i",&n);
	f=1;
	for(x=n;x>=1;x--)
	{
		f=f*x;
	}
	printf("el factorial es:%i",f);
	getch();
}
