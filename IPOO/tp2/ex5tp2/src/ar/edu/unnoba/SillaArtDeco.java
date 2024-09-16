package ar.edu.unnoba;

public class SillaArtDeco extends Silla {
    private String nombre;

    public SillaArtDeco() {
        this.nombre = "silla artDeco";
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String mostrar() {
        return getNombre();
    }
}
