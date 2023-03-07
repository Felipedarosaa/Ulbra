public class ex01 {
    public static void main(String[] args) {

//        1 - Crie uma classe que simule a jogada de um dado de seis lados (nu?meros
//        de 1 a 6) por tre?s vezes. Ao final some seus valores e apresente o resultado
//        das tre?s jogadas.

        System.out.println("Jogando o dado");
        int dado1 = (int) (Math.random() * 6);
        int dado2 = (int) (Math.random() * 6);
        int dado3 = (int) (Math.random() * 6);
        int soma = dado1 + dado2 + dado3;

        System.out.println("1º número: " + dado1);
        System.out.println("2º número: " + dado2);
        System.out.println("3º número: " + dado3);

        System.out.println("A soma dos valores dos dados é " + soma);
    }
}