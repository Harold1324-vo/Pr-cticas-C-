#include<stdio.h>
#include<conio.h>
#include<string.h>
int N;
char NOM [10];
int main()
{
	printf("programa con ciclo for\n");
	printf("escribe tu nombre:");
	gets(NOM);
	for (N=1;N<=100;N+1)
	{
		printf("%s\n",NOM);
	}
	getch();
}
