public class ponto3D extends ponto2D {

    double z;

    public ponto3D(double x, double y, double z) {
        super(x,y);
        this.z = z;
    }

    public String toString() {
        return super.toString() + " | Z = " + z;
    }




}