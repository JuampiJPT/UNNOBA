import ar.edu.unnoba.*;

public class FabricaVictoriana extends Fabrica {
    public FabricaVictoriana() {
    }

    @Override
    public Silla fabricarSilla() {
        return new SillaVictoriana();
    }

    @Override
    public Mesa fabricarMesa() {
        return new MesaVictoriana();
    }

    @Override
    public Sofa fabricarSofa() {
        return new SofaVictoriana();
    }
}
