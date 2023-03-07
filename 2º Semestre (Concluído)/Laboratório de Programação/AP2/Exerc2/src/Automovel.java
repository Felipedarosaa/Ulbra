public class Automovel extends Veiculo {

    public boolean Ligado() {
        return true;
    }

    public void ligar() {
        super.ligar();
        System.out.println("Ligar Automóvel");
    }

    public void desligar() {
        super.desligar();
        System.out.println("Desligar Automóvel");
    }


}