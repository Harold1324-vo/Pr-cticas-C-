#include<stdio.h>
#include<conio.h>
#include<string.h>
int N;
char NOM[50];
int main()
{
	printf("programa con ciclo do-while\n");
	printf("escribe tu nombre:");
	gets(NOM);
	N=1;
	do
	{
		printf("%s\n",N);
		N++;
	}
	while(N<=100);
	getch();
}
