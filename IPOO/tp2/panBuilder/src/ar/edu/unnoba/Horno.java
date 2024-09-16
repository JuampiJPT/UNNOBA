package ar.edu.unnoba;

import java.util.Objects;

public class Horno {
    private PanBuilder builder;
    public Horno(PanBuilder builder) {
        this.builder = builder;
    }

    public Horno() {
    }

    public PanBuilder getBuilder() {
        return builder;
    }

    public void setBuilder(PanBuilder builder) {
        this.builder = builder;
    }

    @Override
    public boolean equals(Object o) {

        if (this == o) return true;
        if (!(o instanceof Horno horno)) return false;
        return Objects.equals(getBuilder(), horno.getBuilder());
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(getBuilder());
    }

    public Pan construir(){
        getBuilder().setTemperatura(true);
        getBuilder().setAguaConSal(true);
        getBuilder().setAguaYMezclar(true);
        getBuilder().setHarinaYRemover(true);
        getBuilder().setAmasar(true);
        getBuilder().setReposar(true);
        getBuilder().setCortarMasa(true);
        getBuilder().setLlevarAlHorno(true);


        Pan pan=getBuilder().getPan();
        System.out.println(pan.toString());
        return pan;
    }

}
