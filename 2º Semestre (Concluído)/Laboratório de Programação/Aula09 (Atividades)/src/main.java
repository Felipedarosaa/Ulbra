public class main {
    public static void main(String[] args) {

        triangulo tri = new triangulo();
        tri.altura = 4;
        tri.base = 2.5;
        double area = tri.calcularArea();
        System.out.println("�rea do Tri�ngulo: " + area);

        quadrado quad = new quadrado();
        quad.lado = 3.2;
        area = quad.calcularArea();
        System.out.println("�rea do Quadrado: " + area);

        circunferencia circ = new circunferencia();
        circ.raio = 5;
        area = circ.calcularArea();
        System.out.println("�rea da Circunfer�ncia: " + area);

        trapezio trap = new trapezio();
        trap.baseMaior = 7.1;
        trap.baseMenor = 3.6;
        trap.altura = 2;
        area = trap.calcularArea();
        System.out.println("�rea do Trap�zio: " + area);

    }
}
