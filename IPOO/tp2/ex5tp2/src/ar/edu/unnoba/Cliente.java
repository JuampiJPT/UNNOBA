package ar.edu.unnoba;

public class Cliente {
    private Fabrica fabrica;
    public Cliente(Fabrica fabrica) {
        this.fabrica = fabrica;
    }
    public Fabrica getFabrica() {
        return fabrica;
    }
    public void setFabrica(Fabrica fabrica) {
        this.fabrica = fabrica;
    }
    public Silla quieroUnaSilla(){
        return getFabrica().fabricarSilla();
    }
    public Mesa quieroUnaMesa(){
        return getFabrica().fabricarMesa();
    }
    public Sofa quieroUnaSofa(){
        return getFabrica().fabricarSofa();
    }
}
