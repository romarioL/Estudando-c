#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define STRSIZE 10

bool login(char user_name[STRSIZE], int senha )
{
	if(strcmp(user_name, "Carlos") == 0 && senha == 1234)
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
	
	fgets(user_name,STRSIZE, stdin);
	
	printf("Digite sua senha \n");
	
	scanf("%d",&senha);
	
	if(login("Carlos", 1234) == true) 
	{
		printf("Seja bem vindo \n");
	}
	
	return 0;
	
}

