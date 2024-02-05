#include<stdio.h>
#include<conio.h>
int x;
int main()
{
	printf("programa con ciclo while\n");
	x=2;
	while(x<=100)
	{
		printf("%i\n",x);
		x=x+2;
	}
	getch();
}
