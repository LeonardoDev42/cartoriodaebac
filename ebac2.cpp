#include <stdio.h>// biblioteca de comuni��o com o  us�ario
#include <stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biobleteca de aloca��o de texto por regi�o
int registro()
{
	printf("Voc� escolheu registro de nomes!\n");
	system("pause");	
}
int consultar()
{
	printf("Voc� escolheu consultar nomes!\n");
	system("pause");	
}
int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");	
}
int main()
{
	int opcao=0;// definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
{

     system("cls");

	
	setlocale(LC_ALL, "Portuguese");//definindo linguagem
	
	printf("### Cat�rio da EBAC ###\n\n");//in�cio do menu
	printf("Escolha op��o desejada do menu:\n\n");
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes\n");//fim do menu
	
	
	scanf("%d", &opcao);//armazenamento de escolha do usu�rio
	
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
		printf("Essa op��o n�o est� disponivel");
		system("pause");
		break;	
	}
 }
	
}
	






	

