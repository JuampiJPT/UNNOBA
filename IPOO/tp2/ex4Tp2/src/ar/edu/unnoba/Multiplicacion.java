package ar.edu.unnoba;

public class Multiplicacion extends OperacionSimple{
    public Multiplicacion(Operacion izquierda, Operacion derecha) {
        super(izquierda, derecha);
    }

    public double calcular() {
        return getIzquierda().calcular()*getDerecha().calcular();
    }
}
