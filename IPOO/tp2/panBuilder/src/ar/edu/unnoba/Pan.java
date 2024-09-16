package ar.edu.unnoba;

public class Pan {
    private String tipoHarina;
    private int porcentajeGrano;

    public Pan() {
    }

    public Pan(String tipoHarina, int porcentajeGrano) {
        setTipoHarina(tipoHarina);
        setPorcentajeGrano(porcentajeGrano);
    }

    public String getTipoHarina() {
        return tipoHarina;
    }

    public void setTipoHarina(String tipoHarina) {
        this.tipoHarina = tipoHarina;
    }

    public int getPorcentajeGrano() {
        return porcentajeGrano;
    }

    public void setPorcentajeGrano(int porcentajeGrano) {
        this.porcentajeGrano = porcentajeGrano;
    }

    @Override
    public String toString() {
        return "Pan{" +
                "tipoHarina='" + tipoHarina + '\'' +
                ", porcentajeGrano=" + porcentajeGrano +
                '}';
    }
}
