import java.util.Scanner;

public class exercicio05 {
    public static void main(String[] args) {

         /*
            5 - Escrever um programa em java para calcular o consumo m�dio de um autom�vel sendo
            fornecida a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.
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
        System.out.println("a taxa m�dia de consumo � de: " + taxaConsumo + " litros por Km percorridos.");
    }
}