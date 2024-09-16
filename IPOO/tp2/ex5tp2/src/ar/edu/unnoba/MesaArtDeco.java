package ar.edu.unnoba;

public class MesaArtDeco extends Mesa{
    private String nombre;

    public MesaArtDeco() {
        this.nombre = "Mesa artDeco";
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String mostrar() {
        return "Mesa artDeco";
    }
}
