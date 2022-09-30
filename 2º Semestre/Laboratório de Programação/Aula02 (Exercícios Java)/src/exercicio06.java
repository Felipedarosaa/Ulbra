import java.util.Scanner;
public class exercicio06 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            6 - Escrever um programa que leia o nome de um vendedor, o seu salário fixo e o
            total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este
            vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o
            seu nome, o salário fixo e salário no final do mês.
         */

        String nome;
        double salario;
        double totalVendas;
        double salFinal;
        double comissao;

        Scanner tc = new Scanner(System.in);
        System.out.println("Informe o nome do Vendedor:\n");
        nome = ler.nextLine(); // (lendo uma String)

        System.out.println("Informe o salário fixo:");
        salario = tc.nextDouble();
        System.out.println("E o total de vendas:");
        totalVendas = tc.nextDouble();

        comissao = (totalVendas * 15)/100;
        salFinal = salario + comissao;

        System.out.printf("O Sr. %s tendo o salario fixo de R$%.2f com a comissão de 15 porcento de suas vendas fica com salário total de R$%.2f.", nome, salario, salFinal);
    }
}