import ar.edu.unnoba.*;

public class FabricaModerna extends Fabrica {
    public FabricaModerna() {
    }

    @Override
    public Silla fabricarSilla() {
        return new SillaModerna();
    }

    @Override
    public Mesa fabricarMesa() {
        return new MesaModerna();
    }

    @Override
    public Sofa fabricarSofa() {
        return new SofaModerno();
    }
}
