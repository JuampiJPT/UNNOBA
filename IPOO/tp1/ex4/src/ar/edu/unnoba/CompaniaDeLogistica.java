package ar.edu.unnoba;

import java.util.Vector;

public class CompaniaDeLogistica {
    private Vector<Container>contenedores;
    public CompaniaDeLogistica() {
        setContenedores();
    }

    public Vector<Container> getContenedores() {
        return contenedores;
    }

    public void setContenedores() {
        this.contenedores = new Vector<>();
    }
    public void agregarContenedor(Container contenedor) {
        getContenedores().add(contenedor);
    }
public float pesoContenedor(Container contenedor) {
        return contenedor.pesoContendedor();
}
public float calcularPesoContenerdores(){
        float peso = 0;
        for (Container contenedor : getContenedores()) {
            peso+=pesoContenedor(contenedor);
        }
        return peso;
}

public float calcularPrecioContenerdores(){
        float precio = 0;
        if (getContenedores().size() > 0) {
            for (Container contenedor : getContenedores()) {
                precio+=contenedor.valorArticulos();
            }
        }
        return precio;
}

}
