import java.util.Scanner;
public class Ex06 {

//        6. Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de Cé a soma dos respectivos elementos em A e B, ou seja: C[i] = A[i] + B[i].

        public static void main(String[] args) {
            Scanner scan = new Scanner(System.in);
            int[] vetorA = new int[15];
            int[] vetorB = new int[15];
            int[] vetorC = new int[15];

            for (int i = 0; i< vetorA.length; i++){
                System.out.printf("Entre com um valor na posicao: " + i + "\n");
                vetorA[i] = scan.nextInt();
            }
            for (int i = 0; i< vetorA.length; i++){
                System.out.printf("Entre com um valor na posicao: " + i + "\n");
                vetorB[i] = scan.nextInt();
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
            System.out.printf("\n -------------- \n");
            System.out.printf("Vetor C = ");
            for (int i=0; i<vetorC.length; i++){
                vetorC[i] = vetorA[i] + vetorB[i];
                System.out.printf(vetorC[i] + " ");
            }
    }

}