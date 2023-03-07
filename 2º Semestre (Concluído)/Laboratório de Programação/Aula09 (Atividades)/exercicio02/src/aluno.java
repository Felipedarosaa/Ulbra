public class aluno {

    prova prova1;
    prova prova2;

    double calcularMedia() {
        double media  = prova1.calcularNotaTotal() + prova2.calcularNotaTotal();
        return media / 2;
    }

}
