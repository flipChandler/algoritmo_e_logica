package avaliacao1;

import java.util.Scanner;

public class Exercicio03 {
	private static Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) {
		int numero = 0, centena, dezena, unidade;
		System.out.println("Digite um n�mero inteiro: ");
		numero = scanner.nextInt();
		int temp = numero;
		
		unidade = (int) temp % 10;
		temp -= unidade; 
		dezena = (int) temp % 100 / 10;
		temp -= dezena;
		centena = (int) temp / 100;
		
		System.out.println(unidade + " " + dezena + " " + centena);
		
		
		
	}

}
