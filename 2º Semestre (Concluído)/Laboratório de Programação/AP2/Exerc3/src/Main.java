public class Main {
    public static void main(String[] args) {

        quadrado q = new quadrado();
        q.lado = 2;
        System.out.println("Área do quadrado: " + q.calcularArea());

        Retangulo r = new Retangulo();
        r.altura = 5;
        r.baseMenor = 2;
        System.out.println("Área do retângulo: " + r.calcularArea());

    }
}