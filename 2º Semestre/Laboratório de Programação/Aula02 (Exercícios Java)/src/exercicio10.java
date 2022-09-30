import java.util.Scanner;
public class exercicio10 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            10 - Faça um programa que receba o preço de custo de um produto e mostre o
            valor de venda. Sabe-se que o preço de custo receberá um acréscimo de
            acordo com um percentual informado pelo usuário.
         */

        double precoCusto, valorVenda;
        double percentualUser;

        Scanner tc = new Scanner(System.in);
        System.out.println("Informe o preço de custo do produto:");
        precoCusto = tc.nextDouble();

        System.out.println("Digite o percentual de acréscimo:");
        percentualUser = tc.nextDouble();

        valorVenda = (precoCusto*percentualUser)/100 + precoCusto;

        System.out.printf("O valor final do produto fica %.2f", valorVenda);
    }
}

