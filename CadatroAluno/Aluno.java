package CadatroAluno;
/*Classe aluno, contÃ©m o contrutor "Aluno" e dois mÃ©todos "calculaMedia" e "infoAlunos", utilizada para 
 apresentar "printar" as informacÃµes*/

public class Aluno {
    String nome;
    int matricula;
    double nota1;
    double nota2;
    double nota3;

    public Aluno(String nome, int matricula, double nota1, double nota2, double nota3){
        this.nome = nome;
        this.matricula = matricula;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
    }
    
    double calculaMedia(){
        return (nota1 + nota2 + nota3) / 3.0;
    }

    

    void infoAlunos(){
        System.out.println("Nome: " + nome);
        System.out.println("Matricula: " + matricula);
        System.out.println("nota1: " + nota1);
        System.out.println("nota2: " + nota2);
        System.out.println("nota3: " + nota3);
        System.out.printf("Media: %.2f%n", calculaMedia());
    }
}
