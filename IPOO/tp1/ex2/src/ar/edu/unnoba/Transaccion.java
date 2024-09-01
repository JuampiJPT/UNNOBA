package ar.edu.unnoba;

import java.util.Date;

public class Transaccion {
    private Date fecha;
    private String tipo;
    private double monto;
    public Transaccion( String tipo, double monto) {
        setMonto(monto);
        setTipo(tipo);
        setFecha();
    }

    public Date getFecha() {
        return fecha;
    }

    public void setFecha() {
        this.fecha = new Date();
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public double getMonto() {
        return monto;
    }

    public void setMonto(double monto) {
        this.monto = monto;
    }
}
