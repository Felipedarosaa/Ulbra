import java.util.Scanner;
public class Ex02 {
    public static void main(String[] args) {

//        2. Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados
//        por 2, ou seja: B[i] = A[i] * 2.

        Scanner scan = new Scanner(System.in);
        int[] vetorA = new int[8];
        int[] vetorB = new int[vetorA.length];

        for (int i = 0; i< vetorA.length; i++) {
            System.out.printf("Entre com um valor na posição: " + i + "\n");
            vetorA[i] = scan.nextInt();
            vetorB[i] = vetorA[i]*2;
        }

        System.out.printf("Vetor A = ");
        for (int i=0; i<vetorA.length; i++) {
            System.out.printf(vetorA[i] + " ");
        }

        System.out.printf("\n -------------- \n");

        System.out.printf("Vetor B = ");
        for (int i=0; i<vetorB.length; i++) {
            System.out.printf(vetorB[i] + " ");
        }

    }
}