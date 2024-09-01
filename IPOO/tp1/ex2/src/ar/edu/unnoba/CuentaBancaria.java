package ar.edu.unnoba;

import java.util.Date;
import java.util.Vector;

public abstract class CuentaBancaria {
    private Persona titular;
    private double saldo;
    private double limite;
    private Date fecha;
    private Vector<Transaccion> transacciones;

    public CuentaBancaria(Persona titular, double saldo, double limite) {
        setPersona(titular);
        setSaldo(saldo);
        setLimite(limite);
        setFecha();
        setTransacciones();


    }

    public Persona getTitular() {
        return titular;
    }

    public void setTitular(Persona titular) {
        this.titular = titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }

    public Date getFecha() {
        return fecha;
    }

    public void setFecha() {
        this.fecha = new Date();
    }
    public void setPersona(Persona titular) {
        this.titular = titular;
    }
    public Persona getPersona() {
        return titular;
    }

    public Vector<Transaccion> getTransacciones() {
        return transacciones;
    }
    public void setTransacciones() {
        this.transacciones = new Vector<>();
    }
    public void agregarTransaccion(Transaccion transaccion) {
        transacciones.add(transaccion);
    }

    public abstract void extraer(double monto);

    public void depositar(double valor) {
        setSaldo(getSaldo() + valor);
        agregarTransaccion( new Transaccion("Deposito", valor));
    }


}
