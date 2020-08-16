#include <stdio.h>

int main (){
	
	int codigo,qnt;
	float valor_total;
	
	printf("cardapio:\n100 Cachorro quente R$ 1.1\n101 Bauru simples   R$ 1.3\n102 Bauru com ovo   R$ 1.5\n103 Hambúrguer      R$ 1.1\n104 Cheeseburger    R$ 1.3\n105 Refrigerante    R$ 1.0\n");
	printf("\nDigite o item desejado: ");
	scanf("%d",&codigo);
	
	printf("Digite a quantidade desejada: ");
	scanf("%d", &qnt);
	
    if ( codigo == 100) {
        valor_total = qnt * 1.1;
        } 
     else if ( codigo == 101) {
        valor_total = qnt * 1.3;
    }
    else if ( codigo == 102) {
        valor_total = qnt * 1.5;
    } else if ( codigo == 103) {
        valor_total = qnt * 1.1;
    } else if ( codigo == 104) {
        valor_total = qnt * 1.3;
    }else if ( codigo == 105) {
        valor_total = qnt * 1.0;
    } 
    else {
        printf ("O codigo informado não existe!");
    }    
     printf ("O total é: %.2f\n", valor_total);
return (0);
}
