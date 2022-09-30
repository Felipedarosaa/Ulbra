import java.util.Scanner;
public class exercicio02 {
    public static void main(String[] args) {

        //  (Atividade 02 Letra A) //
       /* for (int i = 10; i <= 25; i++) {
            System.out.println(i);
        }
        */


        // (ATIVIDADE 02 LETRA B) //
      /*   int soma = 0;
         for (int i = 1; i <= 100; i+=2) {
            soma = soma+i;
        }
        System.out.println(soma);
       */


        // (ATIVIDADE 02 LETRA C) //
        /* int r = 0;
        int i = 0;

        while (r + i < 100) {
            System.out.println(i);
            r += i;
            i++;
        }
         */



        // (ATIVIDADE 02 LETRA D) //

        int multiplicador = 0;
        int total = 0;

        for (int i = 0; i < 10; i++) {
            total = 9 * ++multiplicador;
            System.out.println(9 + " x " + multiplicador + " = " + total);
        }


    }
}
