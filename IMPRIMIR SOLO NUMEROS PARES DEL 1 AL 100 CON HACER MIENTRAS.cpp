#include<stdio.h>
#include<conio.h>
int x;
int main()
{
	printf("programa con ciclo do-while\n");
	x=2;
	do
	{
		printf("%i\n",x);
		x=x+2;
	}
	while(x<=100);
	getch();
}
