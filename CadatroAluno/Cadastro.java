package CadatroAluno;
/*utiliza arrays para armazenar nomes, matriculas, e notas dos alunos, ao final e apresentado
 se foi aprovado (media individual >= 7) ou se foi reprovado*/
 
import java.util.Scanner;

public class Cadastro{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);

        System.out.print("quantos alunos?: ");
        int qtd_alunos = scanner.nextInt();
        scanner.nextLine();

        Aluno[] alunos = new Aluno[qtd_alunos];
        double media_global = 0;

        for(int i = 0; i < qtd_alunos; i++){
            System.out.println("digite o nome do aluno " + (i + 1) + ": ");
            String nome = scanner.nextLine();

            System.out.println("digite o numero de matricula do aluno " + (i + 1) + ": ");
            int matricula = scanner.nextInt();
            scanner.nextLine();

            System.out.println("digite a nota 1 do aluno " + (i + 1) + ": ");
            double nota1 = scanner.nextInt();
            scanner.nextLine();

            System.out.println("digite a nota 2 do aluno " + (i + 1) + ": ");
            double nota2 = scanner.nextInt();
            scanner.nextLine();

            System.out.println("digite a nota 3 do aluno " + (i + 1) + ": ");
            double nota3 = scanner.nextInt();
            scanner.nextLine();

            alunos[i] = new Aluno(nome, matricula, nota1, nota2, nota3);
            media_global = media_global + alunos[i].calculaMedia();
        }

        System.out.println("\n");
        System.out.println("Lista de alunos:");
        System.out.println("\n");
        for(int i = 0; i < qtd_alunos; i++){
            alunos[i].infoAlunos();
            if(alunos[i].calculaMedia() >= 7.0){
                System.out.println("APROVADO!");
            }
            else{
                System.out.println("REPROVADO!");
            }
            System.out.println("\n");
        }
        
        System.out.printf("Media Global: %.2f%n", media_global/qtd_alunos);
        System.out.println("\n");

        scanner.close();
    }
}
 