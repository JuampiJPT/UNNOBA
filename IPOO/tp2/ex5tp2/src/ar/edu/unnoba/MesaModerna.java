package ar.edu.unnoba;

public class MesaModerna extends Mesa {
    private String nombre;

    public MesaModerna() {
        this.nombre = "Mesa moderna";
    }
    public String getNombre() {
        return nombre;
    }

    @Override
    public String mostrar() {
        return getNombre();
    }
}
