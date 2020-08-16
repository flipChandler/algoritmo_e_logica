#include<stdio.h>
#include<string.h>

int main(){

	int flag = 0;
	char senha[11];
	memset(senha,0,sizeof(senha));
	printf("Digite a sua senha: ");
	gets(senha);
	
	if( 0 == strcmp("L1ngu4g3mC", senha))
		flag = 1;
		
	if(flag)
		printf("Acesso garantido \n");
	else
		printf("Acesso negado! \n");
		
		return 0;	
	
}
