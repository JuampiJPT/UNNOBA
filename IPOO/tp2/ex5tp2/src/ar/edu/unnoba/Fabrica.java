package ar.edu.unnoba;

public abstract class Fabrica  {
    public Fabrica() {
    }
    public abstract Silla fabricarSilla();
    public abstract Mesa fabricarMesa();
    public abstract Sofa fabricarSofa();
}
