#include <stdio.h>   //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //fun��o responsavel por cadastrar os usuarios no sistema
{
      //inicio da cria��o de variaveis/string
	  char arquivo[40];
      char cpf[40];
      char nome[40];
      char sobrenome[40];
      char cargo[40];
      //final da cria��o de variaveis/string
      
	  printf("Digite o cpf a ser cadastrado:"); //coletando inform��o do usuario
      scanf("%s",cpf); //% refere-se a string 

    strcpy(arquivo,cpf); //Respons�vel por copiar os valores das sring
   
    FILE*file;  //cria arquivo
    file=fopen(arquivo,"w"); //cria o arquivo "w" significa escrever
    fprintf(file,cpf); //salva o valor da vari�vel                    
    fclose(file); //fecho o arquivo
   
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
   
    printf("Digite o nome a ser cadastrado:");
    scanf("%s",nome);
   
    file=fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
   
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
   
    printf("Digite o sobrenome a ser cadastrado:");
      scanf("%s",sobrenome);

      file=fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
   
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
   
    printf("Digite o cargo a ser cadastrado:");
    scanf("%s",cargo);
   
    file=fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
   
    system("pause");
   
}

int consulta()
{
    setlocale (LC_ALL, "portuguese"); //definindo a linguagem    
	
	char cpf[40];
    char conteudo[200];
	
	printf("Digite o CPF a ser consultado");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	
	printf("\n Essas s�o as informa��es do usu�rio: ");
    printf("%s", conteudo);
	printf("\n\n");
	 
	 
	 system("pause");


}

int deletar()
{
    char cpf[40];
    
    printf("Digite o CPF a ser deletado: ");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("O usu�rio n�o se encontra no sistema...\n");
    	system("pause");
    	
	}
    
    
}
int main ()
    {
    int opcao=0; //definindo as vari�veis
    int laco=1;

    for(laco=1;laco=1;)
    {
      
       system("cls");  
            
            setlocale (LC_ALL, "portuguese"); //definindo a linguagem
   
        printf(">>>cart�rio da Ebac<<<\n\n"); //inicio do menu
        printf("escolha a op��o desejada no menu:\n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar  nomes\n");
        printf("\t3 - Deletar nomes\n");  
        printf("Op��o: ");    //final do menu
   
        scanf("%d", &opcao); //armazenando a escolha do usu�rio
 
        system("cls"); //respons�vel por limpar a tela 
 
  switch(opcao)
  {
      case 1:
            registro(); //chamada de fun��es 
          break;
      
      case 2:
      consulta();
          break;
          
          case 3:
            deletar();
          break;
          
          default:
          printf("Esta op��o n�o est� disponivel\n");
          system("pause");
          break;
            
  }
 
       
        }
        }
