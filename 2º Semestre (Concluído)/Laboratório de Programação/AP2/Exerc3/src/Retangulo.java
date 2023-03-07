public class Retangulo extends AreaCalculavel {

    double baseMenor;
    double altura;
    double area;

    public double calcularArea() {
        this.area = baseMenor * altura;
        return area;
    }

}