public class turma {

   aluno aluno1;
   aluno aluno2;
   aluno aluno3;

   double calcularMedia() {
       double media = aluno1.calcularMedia() + aluno2.calcularMedia() + aluno3.calcularMedia();
       return media / 3;
   }

}
