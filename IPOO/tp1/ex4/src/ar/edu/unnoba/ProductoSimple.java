package ar.edu.unnoba;

public class ProductoSimple extends Producto {
    private float precio;
    private float peso;
    public ProductoSimple(float precio, float peso) {
        setPrecio(precio);
        setPeso(peso);
    }

    public float getPrecio() {
        return precio;
    }

    public void setPrecio(float precio) {
        this.precio = precio;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    @Override
    public float calcPeso() {
        return getPeso();
    }

    @Override
    public float calcValor() {
        return getPrecio();
    }
}
