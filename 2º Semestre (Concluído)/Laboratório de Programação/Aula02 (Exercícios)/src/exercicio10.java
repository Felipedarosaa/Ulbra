import java.util.Scanner;
public class exercicio10 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            10 - Fa�a um programa que receba o pre�o de custo de um produto e mostre o
            valor de venda. Sabe-se que o pre�o de custo receber� um acr�scimo de
            acordo com um percentual informado pelo usu�rio.
         */

        double precoCusto, valorVenda;
        double percentualUser;

        Scanner tc = new Scanner(System.in);
        System.out.println("Informe o pre�o de custo do produto:");
        precoCusto = tc.nextDouble();

        System.out.println("Digite o percentual de acr�scimo:");
        percentualUser = tc.nextDouble();

        valorVenda = (precoCusto*percentualUser)/100 + precoCusto;

        System.out.printf("O valor final do produto fica %.2f", valorVenda);
    }
}

