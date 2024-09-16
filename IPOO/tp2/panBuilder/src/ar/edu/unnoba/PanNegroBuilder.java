package ar.edu.unnoba;

public class PanNegroBuilder extends PanBuilder{
    public PanNegroBuilder() {

        super();
    }

    public Pan getPan(){
        if (isTemperatura() && isAguaConSal()&&isAguaYMezclar()&&isHarinaYRemover()&&isAmasar()){
            return new PanNegro("harina negra",85);
        }
        return null;
    }
}
