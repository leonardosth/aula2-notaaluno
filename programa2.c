#include<stdio.h>
#include<conio.h>

main()
{
	char nome[30];
	int p1, p2, p3;
	float n1, n2, n3, media;
	
	
	//nome do aluno
	
	printf("Qual o nome do aluno? ");
	scanf("%s", nome);
	
	//pedindo as notas e pesos
	
	printf("Qual eh a primeira nota? ");
	scanf("%f", &n1);
	
	printf("Qual eh o primeiro peso? ");
	scanf("%i", &p1);
	
	printf("Qual eh a segunda nota? ");
	scanf("%f", &n2);
	
	printf("Qual eh o segundo peso? ");
	scanf("%i", &p2);
	
	printf("Qual eh a terceira nota? ");
	scanf("%f", &n3);
	
	printf("Qual eh o terceiro peso? ");
	scanf("%i", &p3);
	
	//calculo da media
	

	media = ((n1*p1/10)+(n2*p2/10)+(n3*p3/10));
	
	//apresentando a media
	
	printf("A media do aluno %s eh %.2f", nome, media);
	
}
