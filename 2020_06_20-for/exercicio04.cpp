#include <stdio.h> 

int main(){
    int num, i, primo = 0, metade;
    do{
        printf("Digite um inteiro positivo: \n");
        scanf("%d", &num);
    }while(num <= 0);
    
    metade = num / 2;
    
    for(i = 2; i <= metade; i++){
        if(num %  == 0){
            primo++;
            break;
        }
    }
    
    if(primo == 1){
    	printf("O numero %d eh primo!\n", num);
	}else{
		printf("O numero %d nao eh primo!\n", num);
	}	
    return 0;
}
