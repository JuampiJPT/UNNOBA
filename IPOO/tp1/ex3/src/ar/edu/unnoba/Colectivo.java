package ar.edu.unnoba;

public class Colectivo {
    private String patente;
    private String modelo;
    private float kilometraje;
    public int cantPasajeros;

    public Colectivo(String patente, String modelo, float kilometraje, int cantPasajeros) {
        setPatente(patente);
        setModelo(modelo);
        setKilometraje(kilometraje);
        setCantPasajeros(cantPasajeros);
    }

    public int getCantPasajeros() {
        return cantPasajeros;
    }

    public void setCantPasajeros(int cantPasajeros) {
        this.cantPasajeros = cantPasajeros;
    }

    public String getPatente() {
        return patente;
    }

    public void setPatente(String patente) {
        this.patente = patente;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public float getKilometraje() {
        return kilometraje;
    }

    public void setKilometraje(float kilometraje) {
        this.kilometraje = kilometraje;
    }
}
