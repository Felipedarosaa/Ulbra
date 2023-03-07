import java.util.Scanner;
public class ex02 {
    public static void main(String[] args) {

//        2 - Uma farma?cia precisa ajustar os preços de seus produtos em 12%.
//        Elabore uma classe que receba o valor do produto e aplique o percentual
//        de acrescimo. O novo valor a ser calculado deve ser arredondado para mais
//        ou para menos usando o metodo round. A classe deve tambem conter um
//        laço de repetição que encerre o programa quando o usua?rio fornecer o
//        valor zero
//        (0) para o valor do produto. Dessa forma, o usua?rio digita o valor do
//            produto, a classe calcula e mostra o valor com acre?scimo, a seguir solicita
//        um novo valor. Esse processo continua enquanto o valor do produto for
//        diferente de zero; caso contra?rio o programa sera? encerrado
        Scanner ler = new Scanner(System.in);

        double preco, novoPreco=0;

        do {
            System.out.println("Digite o valor do Produto:");
            preco = ler.nextDouble();

            if (preco == 0) {
                System.out.println("Programa Encerrado!");
            }else {
                novoPreco = (preco*12)/100 + preco;
                System.out.println("O novo preço com acréscimo de 12% é R$" + Math.round(novoPreco));
            }
        }while(preco!=0);
    }
}