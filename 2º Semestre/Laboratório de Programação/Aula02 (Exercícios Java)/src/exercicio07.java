import java.util.Scanner;
public class exercicio07 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        /*
            7 - Escrever um programa que leia o nome de um aluno e as notas das três
            provas que ele obteve no semestre. No final informar o nome do aluno e a
            sua média (aritmética).
         */

        String nomeAluno;
        double nota1, nota2, nota3;
        double media = 0;

        Scanner tc = new Scanner(System.in);
        System.out.println("Digite o nome do Aluno:");
        nomeAluno = ler.nextLine();
        System.out.println("Informe a 1ª nota:");
        nota1 = tc.nextDouble();
        System.out.println("Informe a 2ª nota:");
        nota2 = tc.nextDouble();
        System.out.println("Informe a 3ª nota:");
        nota3 = tc.nextDouble();

        media = (nota1 + nota2 + nota3)/3;

        if (media >= 6) {
            System.out.printf("O aluno %s com média %.0f está Aprovado!", nomeAluno, media);
        }
        else{
            System.out.printf("O aluno %s com média %.0f está Reprovado!", nomeAluno, media);
        }

    }
}