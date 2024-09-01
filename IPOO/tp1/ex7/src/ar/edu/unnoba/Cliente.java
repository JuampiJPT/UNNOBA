package ar.edu.unnoba;

public class Cliente {
    private String nombre;
    private int id;
    public Cliente(String nombre, int id) {
        setNombre(nombre);
        setId(id);
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}
