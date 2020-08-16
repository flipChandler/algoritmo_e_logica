import java.text.Format;
import java.util.Scanner;

public class Exe45 {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        var letra = new String();

        System.out.println("Digite uma letra minuscula:");
        letra = leia.nextLine();

        System.out.println(letra.toUpperCase());
    }
}
