package ar.edu.unnoba;

public class Resta extends OperacionSimple {
    public Resta(Operacion izquierda, Operacion derecha) {
        super(izquierda, derecha);
    }

    public double calcular() {
        return getIzquierda().calcular()-getDerecha().calcular();
    }

}
