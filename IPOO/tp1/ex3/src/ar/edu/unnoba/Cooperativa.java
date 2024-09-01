package ar.edu.unnoba;

import java.util.Vector;

public class Cooperativa {
    private Vector<Chofer> socios;
    private Vector<Colectivo> colectivos;
    public Cooperativa(Vector<Chofer> socios,Vector<Colectivo> colectivos) {
        setSocios(socios);
        setColectivos(colectivos);
    }

    public Vector<Chofer> getSocios() {
        return socios;
    }

    public void setSocios(Vector<Chofer> socios) {
        this.socios = socios;
    }

    public Vector<Colectivo> getColectivos() {
        return colectivos;
    }

    public void setColectivos(Vector<Colectivo> colectivos) {
        this.colectivos = colectivos;
    }

    public Chofer realizarViaje(int cantPasajeros, float cantKmts){
        for (Chofer c : getSocios()){
            if(c.puedeHacerElViaje(cantPasajeros)){
                c.sumarKilometraje(cantKmts);
                return c;
            };
        }
        return null;
    }

    public Colectivo mayorKilometro(){
       if (getSocios().size() > 0){
        Colectivo colectivo = getSocios().firstElement().getColectivo();
        for (Chofer c : getSocios()){
            if (c.cantKmts()>colectivo.getKilometraje()){
                colectivo=c.getColectivo();
            }
        }
        return colectivo;
       }
       return null;
    }

}
