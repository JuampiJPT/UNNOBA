package ar.edu.unnoba;

import java.util.Vector;

public class Caja extends Producto{
    private Vector<ProductoSimple>productosSimples;

    public Caja (){
        setProductosSimples();
    }

    public Vector<ProductoSimple> getProductosSimples() {
        return productosSimples;
    }

    public void setProductosSimples() {
        this.productosSimples = new Vector<>();
    }
    public void agregarProductoSimple(ProductoSimple productoSimple){
        getProductosSimples().add(productoSimple);
    }

    @Override
    public float calcPeso() {
        float peso= 0;
        if(!getProductosSimples().isEmpty()){
            for(ProductoSimple productoSimple : getProductosSimples()){
                peso += productoSimple.calcPeso();
            }
        }
        return peso;
    }

    @Override
    public float calcValor() {
        float valor = 0;
        if(!getProductosSimples().isEmpty()){
            for(ProductoSimple productoSimple : getProductosSimples()){
                valor += productoSimple.calcValor();
            }
        }
        return valor;
    }
}
