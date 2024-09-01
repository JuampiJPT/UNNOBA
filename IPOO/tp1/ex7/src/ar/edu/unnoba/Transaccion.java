package ar.edu.unnoba;

import java.util.Date;

public abstract class Transaccion {
    private Date fecha;
    private double monto;
    private Banco bancoDestino;
    private Cliente clienteDestino;
    private double impuesto;

    public Transaccion(double monto, Banco bancoDestino, Cliente clienteDestino, double impuesto) {
        setFecha();
        setMonto(monto);
        setBancoDestino(bancoDestino);
        setClienteDestino(clienteDestino);
        setImpuesto(impuesto);
    }

    public double getImpuesto() {
        return impuesto;
    }

    public void setImpuesto(double impuesto) {
        this.impuesto = impuesto;
    }

    public Date getFecha() {
        return fecha;
    }

    public void setFecha() {
        this.fecha = new Date();
    }

    public double getMonto() {
        return monto;
    }

    public void setMonto(double monto) {
        this.monto = monto;
    }

    public Banco getBancoDestino() {
        return bancoDestino;
    }

    public void setBancoDestino(Banco bancoDestino) {
        this.bancoDestino = bancoDestino;
    }

    public Cliente getClienteDestino() {
        return clienteDestino;
    }

    public void setClienteDestino(Cliente clienteDestino) {
        this.clienteDestino = clienteDestino;
    }
    public abstract double calcValor();
    public abstract double calcImpuesto();

    public Moneda getMoneda() {
        return getBancoDestino().getMoneda();
    }
    public double getValorMoneda(){
        return getMoneda().getCotizacion();
    }
    public double conversion(){
        return getMonto()*getValorMoneda();
    }

}
