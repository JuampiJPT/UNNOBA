package ar.edu.unnoba;

import java.util.Vector;

public class Container {
    private int id;
    private String destino;
    private float pesoMaximo;
    private Vector<Producto>productos;
    public Container(int id, String destino, float pesoMaximo) {
        setId(id);
        setDestino(destino);
        setPesoMaximo(pesoMaximo);
        setProductos();
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getDestino() {
        return destino;
    }

    public void setDestino(String destino) {
        this.destino = destino;
    }

    public float getPesoMaximo() {
        return pesoMaximo;
    }

    public void setPesoMaximo(float pesoMaximo) {
        this.pesoMaximo = pesoMaximo;
    }

    public Vector<Producto> getProductos() {
        return productos;
    }

    public void setProductos() {
        this.productos = new Vector<>();
    }

    public void agregarProducto(Producto producto) {
        getProductos().add(producto);
    }

    public float pesoProducto(Producto producto) {
        return producto.calcPeso();
    }

    public float precioProducto(Producto producto) {
        return producto.calcValor();
    }

    public float pesoContendedor(){
        float peso = 0;
        if (getProductos().size() > 0) {
            for (Producto producto : getProductos()) {
                peso += pesoProducto(producto);
            }
        }
        return peso;
    }
    public float valorArticulos(){
        float precio = 0;
        if (getProductos().size() > 0) {
            for (Producto producto : getProductos()) {
                precio+=precioProducto(producto);
            }
        }
        return precio;
    }

}
