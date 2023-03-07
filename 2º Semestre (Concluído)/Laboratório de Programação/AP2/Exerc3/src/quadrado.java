public class quadrado extends AreaCalculavel{

    double lado;
    double area;

    public double calcularArea() {
        this.area = Math.pow(this.lado,2);
        return area;
    }

}