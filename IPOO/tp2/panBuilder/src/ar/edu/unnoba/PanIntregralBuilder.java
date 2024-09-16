package ar.edu.unnoba;

public class PanIntregralBuilder extends PanBuilder{

    public PanIntregralBuilder(){
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
            return new PanIntegral("harina integral", 100);
        }
        return null;
    }

}
