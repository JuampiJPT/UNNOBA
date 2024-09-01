package ar.edu.unnoba;

public class Moneda {
    private String nombre;
    private double cotizacion;

    public Moneda(String nombre, double cotizacion) {
        setNombre(nombre);
        setCotizacion(cotizacion);
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public double getCotizacion() {
        return cotizacion;
    }

    public void setCotizacion(double cotizacion) {
        this.cotizacion = cotizacion;
    }
}
