import java.util.Scanner;

public class exercicio05 {
    public static void main(String[] args) {

         /*
            5 - Escrever um programa em java para calcular o consumo médio de um automóvel sendo
            fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.
         */

        Scanner tc = new Scanner(System.in);
        double taxaConsumo;
        double km1;
        double km2;
        double kmTotal;
        double litros;

        System.out.println("Informe o KM inicial: ");
        km1 = tc.nextInt();
        System.out.println("Informe o KM final: ");
        km2 = tc.nextInt();
        System.out.println("Informe a quantidade de litros consumidos: ");
        litros = tc.nextInt();

       kmTotal = km2 - km1;
       taxaConsumo = kmTotal / litros;

        System.out.println("O total percorrido foi de " + kmTotal + " Km ");
        System.out.println("a taxa média de consumo é de: " + taxaConsumo + " litros por Km percorridos.");
    }
}