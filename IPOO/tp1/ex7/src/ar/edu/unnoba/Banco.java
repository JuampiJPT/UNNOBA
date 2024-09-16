package ar.edu.unnoba;

import java.util.Vector;

public class Banco {
    private String nombre;
    private String ubicacion;
    private String pais;
    private Vector<Transaccion>transacciones;
    private Moneda moneda;
    private Vector<Cliente> clientes;

    public Banco(String nombre, String ubicacion, String pais, Moneda moneda) {
        setNombre(nombre);
        setUbicacion(ubicacion);
        setPais(pais);
        setTransacciones();
        setMoneda(moneda);
        setCliente();
    }



    public Vector<Transaccion> getTransacciones() {
        return transacciones;
    }

    public void setTransacciones() {
        this.transacciones = new Vector<>();
    }

    public Vector<Cliente> getClientes() {
        return clientes;
    }

    public void setCliente() {
        this.clientes = new Vector<>();
    }
    public void addCliente(Cliente cliente) {
        getClientes().add(cliente);
    }
    public Moneda getMoneda() {
        return moneda;
    }

    public void setMoneda(Moneda moneda) {
        this.moneda = moneda;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getUbicacion() {
        return ubicacion;
    }

    public void setUbicacion(String ubicacion) {
        this.ubicacion = ubicacion;
    }

    public String getPais() {
        return pais;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }
    public void agregarTransaccion(Transaccion transaccion) {
        getTransacciones().add(transaccion);
    }
    public  int cantidadTransacciones(){
        return getTransacciones().size();
    }
    public double impuestoACobrarDe (Transaccion transaccion) {
        return transaccion.getImpuesto();
    }
    public double impuestoACobrar(Transaccion transaccion) {
        return transaccion.calcImpuesto();
    }
    public double montoDeTransaccion(Transaccion transaccion) {
        return transaccion.calcValor();
    }
    public double impuestoACobrar(){
        double suma= 0;
        if (!getTransacciones().isEmpty()){
            for (Transaccion transaccion : getTransacciones()) {
                suma+=impuestoACobrar(transaccion);
            }
        }
        return suma;
    }
    public double montoTotalDeTransacciones(){
        double suma = 0;
        if(!getTransacciones().isEmpty()){
            for(Transaccion transaccion : getTransacciones()){
                suma+=montoDeTransaccion(transaccion);
            }
        }
        return suma;
    }
}
