#include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de regi�o
#include <string.h> //biblioteca por cuidar das string
int registro()// fun��o respons�vel por cadastrar os usu�rio no sistema
{
	//inicio da variaveis /string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da cria�ao das variaveis
    printf("digite o CPF a ser cadstrado:"); //coletando informa��o do usu�rio
    scanf("%s",cpf);//%s referente as string
    strcpy(arquivo,cpf);//Responsav�l por copiar as string 
    
    FILE *file;// criar o arquivo
    file = fopen(arquivo,"w");// criar o arquivo
    fprintf(file,cpf);// salvo o valor da variav�l
    fclose(file);// fecha de arquivo
    
    file =fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o nome a ser cadastrado:");
    scanf("%s",nome);
    
    
    file=fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
    
    file= fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o sobrenome a ser cadastrado:");
    scanf("%s",sobrenome);
    
    file=fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o cargo a ser cadastrado:");
    scanf("%s",cargo);
    
    
    file =fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
}

     
	int consultar()     
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF  a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file=fopen(cpf,"r");
	
	if(file== NULL)
	{
		printf("n�o foi poss�vel abrir o arquivo,n�o localizado!\n");
	}
	
	while (fgets(conteudo,200,file)!=NULL)
	{
		printf("\n Essa s�o as informa��es do usu�rio:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");

}

int deletar()
{
	char cpf[40]; 
	printf("digente o cpf do uusario a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	FILE *file;
	file= fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("O usuario n�o se encontra no sistema!\n");
		system("pause");
	}
}

int main()
{
	int opcao=0;//definindo vari�veis
	int laco=1;

	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL,"portugues");// defini�ao de linguagem
	
	printf("### Cat�rio da ebac ###\n\n");
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1-Registro de nomes\n");
	printf("\t2-Consultar nomes\n");
	printf("\t3-Deleatr nomes\n");
	printf("op��o:");
	
	scanf("%d",&opcao);
	
	system("cls");//responsavel por limpar a tela
	
	
	switch(opcao)// in�cio da sele��o do menu
		
    	case 1:
	    registro();//chamada de fun��es
	    break;
	
      	case 2:
	    consultar();
	    break;
	
	    case 3:
	    deletar();
	    break;
	    
	  
	    
	    default:
	    printf("essa op��o n�o est� dispon�vel!\n");	
	    system("pause");
	    break;
	
    
	}
     
    }

    }
	
	

	
		
	 
			
		
	
