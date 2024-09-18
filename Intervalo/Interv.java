package Intervalo;

public class Interv{
    int numi;
    int numf;

    Interv(int numi, int numf) {
        if (numi < numf) {
            this.numi = numi;
            this.numf = numf;
        } else {
            this.numi = numf;
            this.numf = numi;
        }
    }

    void info(){
        System.out.println("Intervalo entre " + numi + " e " + numf + ": ");
    }

    double qtdIntervalo(){
        double qtd = numf - numi;
        return qtd;
    }

    double soma() {
        double soma = 0;
        for (int i = numi; i < numf + 1; i++) {
            soma = soma + i;
        }
        return soma;
    }

    double media() {
        return soma() / (numf - numi + 1);
    }

    int qtdePares() {
        int qtde = 0;
        for (int i = numi; i < numf + 1; i++) {
            if ((i % 2) == 0)
                qtde++;
        }
        return qtde;
    }

    int qtdeImpares() {
        int qtde = 0;
        for (int i = numi; i < numf + 1; i++) {
            if ((i % 2) > 0)
                qtde++;
        }
        return qtde;
    }
}

