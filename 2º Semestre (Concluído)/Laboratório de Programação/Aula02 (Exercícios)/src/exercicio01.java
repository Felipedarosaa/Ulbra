public class exercicio01 {
    public static void main(String[] args) {

    /*
        1- Um aluno tirou notas 8.5, 7.5 e 6.0 em provas que tinham peso 3, 2 e 5, respectivamente.
        Escreva um prog'rama que imprima a média do aluno.
    */

        // notas do aluno nas provas
        double nota1 = 8.5;
        double nota2 = 7.5;
        double nota3 = 6.0;
        // peso das provas
        int peso1 = 3;
        int peso2 = 2;
        int peso3 = 5;
        // calculo parcial da nota
        double parcial1 = nota1 * peso1;
        double parcial2 = nota2 * peso2;
        double parcial3 = nota3 * peso3;
        // calculo da média é a soma das parciais, dividida pela soma dos pesos
        double media = (parcial1 + parcial2 + parcial3) / (peso1 + peso2 + peso3);

        System.out.println("A média do aluno é " + media);
    }
}