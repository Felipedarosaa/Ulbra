import java.util.Scanner;
public class exercicio09 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            9 - A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco)
            prestações sem juros. Faça um programa que receba um valor de uma compra
            e mostre o valor das prestações
         */

        double valorCompra;
        double parcelas;

        Scanner tc = new Scanner(System.in);
        System.out.println("Informe o valor da compra");
        valorCompra = tc.nextDouble();

        parcelas = valorCompra/5;

        System.out.printf("A compra no valor de R$%.2f em 5x sem juros fica R$%.2f por parcela", valorCompra, parcelas);
    }
}