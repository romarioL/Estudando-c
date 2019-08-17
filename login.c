#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <curses.h>

#define STRSIZE 10

bool login(char user_name[STRSIZE], int senha )
{
	if(strcmp(user_name, "Carlos \n") == 0 && senha == 1234)
	{
		
		return true;
	}else 
	{
		return false;
		
	}
}


int main() 
{
	
	char user_name[STRSIZE];
	
	int senha;
	
	printf("Digite seu nome de usuário \n");
	
	
	
	fgets(user_name, STRSIZE, stdin);
	

	
	printf("Digite sua senha \n");
	
	scanf("%d",&senha);
	
	senha =  getch();
	
	
	if(login(user_name, senha) == true) 
	{
		printf("Seja bem vindo \n");
	}else 
	{
		printf("Senha inválida \n");
	}
	
	return 0;
	
}

