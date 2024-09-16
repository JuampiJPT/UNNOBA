package ar.edu.unnoba;

public class Numero extends Operacion {
    private double numero;
    public Numero(double numero) {
        this.numero = numero;
    }
    public double getNumero() {
        return numero;
    }
    public void setNumero(double numero) {
        this.numero = numero;
    }

    @Override
    public double calcular() {
        return getNumero();
    }
}
