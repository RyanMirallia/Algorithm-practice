package Intervalo;
import java.util.Scanner;


public class Exercicio{

    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int numi = 0, numf = 0;

    System.out.println("Entre o primeiro número:");

    numi = sc.nextInt();

    System.out.println("Entre o segundo número:");

    numf = sc.nextInt();

    Interv num = new Interv(numi,numf);

    num.info();
    System.out.println("Soma : " + num.soma() + " Média : " + num.media() + " Qtde Pares : " + num.qtdePares() + " Qtde Ímpares : " + num.qtdeImpares() + " Qtde Intervalo: " + num.qtdIntervalo());
    }

    
}