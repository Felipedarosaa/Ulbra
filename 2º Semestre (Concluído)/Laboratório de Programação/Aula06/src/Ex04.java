import java.util.Scanner;
import static java.lang.Math.sqrt;
public class Ex04 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

//        4. Criar um vetor A com 15 elementos inteiros. Construir um vetor B de mesmo tamanho, sendo que cada elemento do vetor B deverá ser a raiz quadrada do respectivo elemento de A, ou seja: B[i] = sqrt(A[i]).

        int[] vetorA = new int[15];
        int[] vetorB = new int[vetorA.length];

        for (int i = 0; i< vetorA.length; i++){
            System.out.printf("Entre com um valor na posição: " + i + "\n");
            vetorA[i] = scan.nextInt();
            vetorB[i] = (int) sqrt(vetorA[i]);
        }

        System.out.printf("Vetor A = ");
        for (int i=0; i<vetorA.length; i++){
            System.out.printf(vetorA[i] + " ");
        }
        System.out.printf("\n -------------- \n");

        System.out.printf("Vetor B = ");
        for (int i=0; i<vetorB.length; i++){
            System.out.printf(vetorB[i] + " ");
        }

    }
}