package ar.edu.unnoba;

public class PanBlancoBuilder extends PanBuilder {
    public PanBlancoBuilder(){
        setTemperatura(false);
        setAguaConSal(false);
        setAguaYMezclar(false);
        setHarinaYRemover(false);
        setAmasar(false);
        setReposar(false);
        setCortarMasa(false);
        setLlevarAlHorno(false);
    }
    public Pan getPan(){
        if (isTemperatura() && isAguaConSal()&&isAguaYMezclar()&&isHarinaYRemover()&&isAmasar()){
            return new PanBlanco("harina blanca",75);
        }
        return null;
    }
}
