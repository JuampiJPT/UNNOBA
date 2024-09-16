package ar.edu.unnoba;

public class MesaVictoriana extends Mesa{
    private String nombre;

    public MesaVictoriana() {
        this.nombre = "Mesa Victoriana";
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String mostrar() {
        return "Mesa Victoriana";
    }
}
