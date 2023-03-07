public class exercicio03 {
    public static void main(String[] args) {
        /*
            Imprima os 15 primeiros números da série de Fibonacci. A série de Fibonacci é tem os
            seguintes elementos: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Para calculá-la, o primeiro e segundo
            elementos valem 1, e daí por diante, o n-ésimo elemento vale o (n-1)-ésimo elemento
            somado ao (n-2)-ésimo elemento (ex: 8 = 5 + 3).
            Para mais informações, consulte: http://pt.wikipedia.org/wiki/Número_de_Fibonacci.
         */
            int j = 1;
            int count = 0;
            for (int i = 0; count < 15; count++) {
            System.out.println(i + " ");
            i = i + j;
            j = i - j;
            }

    }
}
