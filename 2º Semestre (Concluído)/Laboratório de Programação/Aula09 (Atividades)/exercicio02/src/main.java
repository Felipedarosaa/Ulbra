public class main {
    public static void main(String[] args) {

        // Criando a turma

        turma turma = new turma();

        // Cria��o dos alunos
        aluno aluno1 = new aluno();
        aluno aluno2 = new aluno();
        aluno aluno3 = new aluno();

        // Associa��o dos aluno e a turma
        turma.aluno1 = aluno1;
        turma.aluno2 = aluno2;
        turma.aluno3 = aluno3;

        // Criar as provas para cada aluno e definir as notas

        // Aluno 1
        prova aluno1Prova1 = new prova();
        aluno1Prova1.notaParte1 = 4.0;
        aluno1Prova1.notaParte2 = 2.5;
        aluno1.prova1 = aluno1Prova1;
        prova aluno1Prova2 = new prova();
        aluno1Prova2.notaParte1 = 1.0;
        aluno1Prova2.notaParte2 = 7.0;
        aluno1.prova2 = aluno1Prova2;

        // Aluno 2
        prova aluno2Prova1 = new prova();
        aluno2Prova1.notaParte1 = 6.0;
        aluno2Prova1.notaParte2 = 2.5;
        aluno2.prova1 = aluno2Prova1;
        prova aluno2Prova2 = new prova();
        aluno2Prova2.notaParte1 = 1.0;
        aluno2Prova2.notaParte2 = 9.0;
        aluno2.prova2 = aluno2Prova2;

        // Aluno 1
        prova aluno3Prova1 = new prova();
        aluno3Prova1.notaParte1 = 4.0;
        aluno3Prova1.notaParte2 = 2.5;
        aluno3.prova1 = aluno3Prova1;
        prova aluno3Prova2 = new prova();
        aluno3Prova2.notaParte1 = 2.0;
        aluno3Prova2.notaParte2 = 7.0;
        aluno3.prova2 = aluno3Prova2;

        // Imprimir a m�dia de cada aluno
        System.out.println("A m�dia do aluno 1 �: " + turma.aluno1.calcularMedia());
        System.out.println("A m�dia do aluno 2 �: " + turma.aluno2.calcularMedia());
        System.out.println("A m�dia do aluno 3 �: " + turma.aluno3.calcularMedia());

        // Imprimir a m�dia da turma
        System.out.println("A m�dia da turma �: " + turma.calcularMedia());





    }
}
