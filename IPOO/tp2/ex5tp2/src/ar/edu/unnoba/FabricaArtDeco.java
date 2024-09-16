package ar.edu.unnoba;

public class FabricaArtDeco extends Fabrica{
    public FabricaArtDeco() {
    }

    @Override
    public Silla fabricarSilla() {
        return new SillaArtDeco();
    }

    @Override
    public Mesa fabricarMesa() {
        return new MesaArtDeco();
    }

    @Override
    public Sofa fabricarSofa() {
        return new SofaArtDeco();
    }
}
