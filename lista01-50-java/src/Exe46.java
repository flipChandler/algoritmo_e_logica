import java.util.Scanner;

public class Exe46 {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        String num = null;
        System.out.println("Digite um numero inteiro de 3 digitos:");
        num = leia.nextLine();

        System.out.print("O número invertido ficou => ");
        for (int i = 2; i >= 0; i-- ) {
            System.out.print( num.charAt(i) );
        }
    }
}
