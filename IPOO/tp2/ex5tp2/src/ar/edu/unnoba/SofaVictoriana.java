package ar.edu.unnoba;

public class SofaVictoriana extends Sofa {
    private String nombre;
    public SofaVictoriana() {
        this.nombre = "Sofa Victoriana";
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String mostrar() {
        return "Sofa Victoriana";
    }
}
