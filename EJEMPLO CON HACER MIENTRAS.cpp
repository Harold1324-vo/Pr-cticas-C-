#include<stdio.h>
#include<conio.h>
int x;
int main()
{
	printf("programa con el ciclo do-while\n");
	x=1;
	do
	{
		printf("%i\n",x);
		x++;
	}
	while (x<=10);
	getch();
}
