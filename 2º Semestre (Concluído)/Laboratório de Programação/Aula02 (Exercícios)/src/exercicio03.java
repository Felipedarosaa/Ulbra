public class exercicio03 {
    public static void main(String[] args) {
        /*
            Imprima os 15 primeiros n�meros da s�rie de Fibonacci. A s�rie de Fibonacci � tem os
            seguintes elementos: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Para calcul�-la, o primeiro e segundo
            elementos valem 1, e da� por diante, o n-�simo elemento vale o (n-1)-�simo elemento
            somado ao (n-2)-�simo elemento (ex: 8 = 5 + 3).
            Para mais informa��es, consulte: http://pt.wikipedia.org/wiki/N�mero_de_Fibonacci.
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
