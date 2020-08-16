import java.util.*;

public class Bubble {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);

        int [] vetor = new int[5];

        for ( int i = 0; i < vetor.length; i++ ) {
            System.out.println("Digite um numero:");
            vetor[i] = leia.nextInt();
        }

        Arrays.sort( vetor );

        Arrays.stream( vetor ).forEach( printVetor -> System.out.print( printVetor + " "));
    }
}
