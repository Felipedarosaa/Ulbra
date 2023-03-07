public class Main {
    public static void main(String[] args) {

        Veiculo a = new Automovel();
        System.out.println("Automóvel ligado? " + a.Ligado());
        a.desligar();


        System.out.println("---------------------------");


        Veiculo m = new Motocicleta();
        System.out.println("Motocicleta ligada? " + m.Ligado());
        m.ligar();


        System.out.println("---------------------------");


        Veiculo o = new Onibus();
        System.out.println("ônibus ligado? " + o.Ligado());
        o.desligar();

    }
}