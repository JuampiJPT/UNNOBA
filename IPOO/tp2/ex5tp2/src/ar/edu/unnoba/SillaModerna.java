package ar.edu.unnoba;

public class SillaModerna extends Silla {
    private String nombre;
    public SillaModerna() {
        this.nombre = "Silla Moderna";
    }
    public String getNombre() {
        return nombre;
    }

    @Override
    public String mostrar() {
        return getNombre();
    }

}
