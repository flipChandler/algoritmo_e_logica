import java.util.Scanner;

public class Exe47 {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        String num = "";
        System.out.println("Digite um numero inteiro de 4 digitos");
        num = leia.nextLine();

        for ( int i = 0; i < 4; i++ ) {
            System.out.println(num.charAt(i));
        }

    }
}
