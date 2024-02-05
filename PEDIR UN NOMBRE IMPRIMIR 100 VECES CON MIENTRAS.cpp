#include<stdio.h>
#include<conio.h>
#include<string.h>
int N;
char NOM[50];
int main()
{
	printf("programa con ciclo while\n");
	printf("escirbe tu nombre:");
	gets(NOM);
	N=1;
	while(N<=100)
	{
		printf("%s\n",NOM);
		N+1;
	}
	getch();
}
