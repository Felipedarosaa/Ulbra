public class trapezio {

    double baseMaior;
    double baseMenor;
    double altura;
    double area;

    public double calcularArea() {
        this.area = ((this.baseMaior + this.baseMenor) / 2) * this.altura;
        return area;
    }
}
