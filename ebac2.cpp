#include <stdio.h>// biblioteca de comunição com o  usúario
#include <stdlib.h>//biblioteca de alocação de espaço em memória
#include <locale.h>//biobleteca de alocação de texto por região
int registro()
{
	printf("Você escolheu registro de nomes!\n");
	system("pause");	
}
int consultar()
{
	printf("Você escolheu consultar nomes!\n");
	system("pause");	
}
int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");	
}
int main()
{
	int opcao=0;// definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
{

     system("cls");

	
	setlocale(LC_ALL, "Portuguese");//definindo linguagem
	
	printf("### Catório da EBAC ###\n\n");//início do menu
	printf("Escolha opção desejada do menu:\n\n");
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes\n");//fim do menu
	
	
	scanf("%d", &opcao);//armazenamento de escolha do usuário
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consultar();
		break;
		
		case 3: 
		deletar();
	    break;
		
		
		default:
		printf("Essa opção não está disponivel");
		system("pause");
		break;	
	}
 }
	
}
	






	

