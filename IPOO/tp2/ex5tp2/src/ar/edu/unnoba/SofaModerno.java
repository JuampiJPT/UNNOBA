package ar.edu.unnoba;

public class SofaModerno extends Sofa{
    private String nombre;

    public SofaModerno() {
        this.nombre = "Sofa Moderno";
    }
    public String getNombre() {
        return nombre;
    }

    @Override
    public String mostrar() {
        return "Sofa Moderno";
    }

}
