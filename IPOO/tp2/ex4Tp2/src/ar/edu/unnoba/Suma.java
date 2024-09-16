package ar.edu.unnoba;

public class Suma extends OperacionSimple{
    public Suma(Operacion izquierda, Operacion derecha) {
        super(izquierda, derecha);
    }

    @Override
    public double calcular() {
        return getIzquierda().calcular()+getDerecha().calcular();
    }


}
