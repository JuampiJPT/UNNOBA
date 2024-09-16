package ar.edu.unnoba;

public class SofaArtDeco extends Sofa{
    private String nombre;

    public SofaArtDeco() {
        this.nombre = "Sofa artDeco";
    }

    @Override
    public String mostrar() {
        return "Sofa art Deco";
    }
}
