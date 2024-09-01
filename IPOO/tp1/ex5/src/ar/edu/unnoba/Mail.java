package ar.edu.unnoba;

import java.util.Vector;

public class Mail {
    private String asunto;
    private String texto;
    private Contacto origen;
    private Vector<Contacto> destinatarios;
    private boolean visto;
    public Mail(String asunto, String texto, Contacto origen,boolean visto) {
        this.asunto = asunto;
        this.texto = texto;
        this.origen = origen;
        setDestinatarios();
        this.visto = visto;
    }

    public String getAsunto() {
        return asunto;
    }

    public void setAsunto(String asunto) {
        this.asunto = asunto;
    }

    public String getTexto() {
        return texto;
    }

    public void setTexto(String texto) {
        this.texto = texto;
    }

    public Contacto getOrigen() {
        return origen;
    }

    public void setOrigen(Contacto origen) {
        this.origen = origen;
    }

    public Vector<Contacto> getDestinatarios() {
        return destinatarios;
    }

    public void setDestinatarios() {
        this.destinatarios = new Vector<>();
    }
    public void agregarDestinatario(Contacto destinatario) {
        getDestinatarios().add(destinatario);
    }

    public boolean isVisto() {
        return visto;
    }

    public void setVisto(boolean visto) {
        this.visto = visto;
    }
}
