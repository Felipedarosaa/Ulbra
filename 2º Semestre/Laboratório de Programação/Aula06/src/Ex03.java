import java.util.Scanner;
public class Ex03 {
    public static void main(String[] args) {

//        3. Criar um vetor A com 15 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho, sendo que cada elemento do vetor B dever� ser o quadrado do respectivo elemento de A, ou seja: B[i] = A[i] * A[i].

        Scanner scan = new Scanner(System.in);
        int[] vetorA = new int[15];
        int[] vetorB = new int[vetorA.length];

        for (int i = 0; i< vetorA.length; i++){
            System.out.printf("Entre com um valor na posi��o: " + i + "\n");
            vetorA[i] = scan.nextInt();
            vetorB[i] = vetorA[i]*vetorA[i];
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