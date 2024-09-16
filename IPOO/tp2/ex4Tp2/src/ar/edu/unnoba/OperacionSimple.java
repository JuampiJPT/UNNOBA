package ar.edu.unnoba;

public abstract class OperacionSimple extends Operacion{
    private Operacion izquierda;
    private Operacion derecha;
    public OperacionSimple() {}

    public OperacionSimple(Operacion izquierda, Operacion derecha) {
        this.izquierda = izquierda;
        this.derecha = derecha;
    }

    public Operacion getIzquierda() {
        return izquierda;
    }

    public void setIzquierda(Operacion izquierda) {
        this.izquierda = izquierda;
    }

    public Operacion getDerecha() {
        return derecha;
    }

    public void setDerecha(Operacion derecha) {
        this.derecha = derecha;
    }

    @Override
    public abstract double calcular();
}
