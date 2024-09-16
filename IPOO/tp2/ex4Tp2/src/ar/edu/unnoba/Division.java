package ar.edu.unnoba;

public class Division extends OperacionSimple{
    public Division(Operacion izquierda, Operacion derecha) {
        super(izquierda, derecha);
    }

    public double calcular() {
        return getIzquierda().calcular()/getDerecha().calcular();
    }
}
