import java.util.Scanner;
public class exercicio06 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            6 - Escrever um programa que leia o nome de um vendedor, o seu sal�rio fixo e o
            total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este
            vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o
            seu nome, o sal�rio fixo e sal�rio no final do m�s.
         */

        String nome;
        double salario;
        double totalVendas;
        double salFinal;
        double comissao;

        Scanner tc = new Scanner(System.in);
        System.out.println("Informe o nome do Vendedor:\n");
        nome = ler.nextLine(); // (lendo uma String)

        System.out.println("Informe o sal�rio fixo:");
        salario = tc.nextDouble();
        System.out.println("E o total de vendas:");
        totalVendas = tc.nextDouble();

        comissao = (totalVendas * 15)/100;
        salFinal = salario + comissao;

        System.out.printf("O Sr. %s tendo o salario fixo de R$%.2f com a comiss�o de 15 porcento de suas vendas fica com sal�rio total de R$%.2f.", nome, salario, salFinal);
    }
}