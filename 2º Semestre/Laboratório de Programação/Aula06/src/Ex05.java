import java.text.DecimalFormat;
import java.util.Scanner;
public class Ex05 {
    public static void main(String[] args) {

//        5. Criar um vetor A com 10 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho, sendo que cada elemento do vetor B deverá ser o respectivo elemento de A multiplicado por sua posição (ou indice), ou seja: B[i] = A[i] * i.

        Scanner scan = new Scanner(System.in);
        int[] vetorA = new int[10];
        int[] vetorB = new int[vetorA.length];

        for (int i = 0; i< vetorA.length; i++){
            System.out.printf("Entre com um valor na posição: " + i + "\n");
            vetorA[i] = scan.nextInt();
            vetorB[i] = vetorA[i]*i;
        }

        System.out.printf("Vetor A = ");
        for (int i=0; i<vetorA.length; i++){
            System.out.printf(vetorA[i] + " ");
        }
        System.out.printf("\n -------------- \n");

        System.out.printf("Vetor B = ");
        for (int i=0; i<vetorB.length; i++){
            System.out.println(vetorB[i] + " ");
        }

    }
}