package ar.edu.unnoba;

public class SillaVictoriana extends Silla {
    private String nombre;
    public SillaVictoriana() {
        this.nombre = "Silla Victoriana";
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String mostrar() {
        return "Silla Victoriana";
    }
}
