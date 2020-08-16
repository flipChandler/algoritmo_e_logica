import java.util.Scanner;

public class Exe44 {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        double alturaDegrau = 0, alturaEscada = 0;
        double qtdeDegrau = 0;
        System.out.println("Digite a altura do degrau em centimetros");
        alturaDegrau = leia.nextDouble();
        System.out.println("Digite a altura que deseja subir na escada em metros");
        alturaEscada = leia.nextDouble();
        qtdeDegrau = alturaEscada / ( alturaDegrau / 100);
        System.out.println("O usuário deverá subir " + Math.round(qtdeDegrau) + " degraus");
    }
}
