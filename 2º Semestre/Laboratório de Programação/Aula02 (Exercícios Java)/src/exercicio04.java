import java.util.Scanner;
public class exercicio04 {
    public static void main(String[] args) {

        // 4 - Escrever um programa java que receba dois números e exiba o resultado da sua soma. //

        int numero1, numero2;
        int soma = 0;

        Scanner tc = new Scanner(System.in);
        System.out.println("Digite o 1º número:");
        numero1 = tc.nextInt();

        System.out.println("Digite o 2º número:");
        numero2 = tc.nextInt();

        soma = numero1 + numero2;
        System.out.println("A soma dos números é = " + soma);
    }
}