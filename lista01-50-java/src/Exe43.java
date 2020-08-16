import java.text.DecimalFormat;
import java.util.Scanner;

public class Exe43 {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        double venda = 0, parcela, vendaDesconto, comissaoVendedorVista, comissaoVendedorPrazo;

        System.out.println("Digite o valor total da venda:");
        venda = leia.nextDouble();
        parcela = venda /3;
        vendaDesconto = venda * (1 - 0.10);
        comissaoVendedorVista = vendaDesconto * 0.05;
        comissaoVendedorPrazo = venda * 0.05;

        System.out.println( String.format("Total a pagar com desconto de 10%% é %.2f reais", vendaDesconto));
        System.out.println( String.format("Parcelado em 3 vezes, o valor de cada parcela fica %.2f reais", parcela ));
        System.out.println( String.format("A comissão do vendedor com a venda à vista é %.2f reais", comissaoVendedorVista));
        System.out.println( String.format("A comissão do vendedor com a venda a prazo é %.2f reais", comissaoVendedorPrazo));
    }
}
