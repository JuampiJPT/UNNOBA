package ar.edu.unnoba;

public class Chofer extends Persona {
    private Colectivo colectivo;

    public Chofer(String nombre, String apellido, int edad, Colectivo colectivo) {
        super(nombre, apellido, edad);
        this.setColectivo(colectivo);
    }

    public Colectivo getColectivo() {
        return colectivo;
    }

    public void setColectivo(Colectivo colectivo) {
        this.colectivo = colectivo;
    }

    public boolean puedeHacerElViaje(int cantPasajeros) {
        return (colectivo.getCantPasajeros() >= cantPasajeros);
    }
    public void sumarKilometraje(float cantKmts){
        getColectivo().setKilometraje(getColectivo().getKilometraje() + cantKmts);
    }
    public float cantKmts (){
        return getColectivo().getKilometraje();
    }

}