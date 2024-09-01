package ar.edu.unnoba;

import java.util.Vector;

public class Gmail {
    private Cuenta cuenta;
    private Vector<Contacto>contactos;

    public Gmail(Cuenta cuenta) {
        this.cuenta = cuenta;
        setContactos();
    }

    public Vector<Contacto> getContactos() {
        return contactos;
    }

    public void setContactos() {
        this.contactos = new Vector<>();
    }
    public void addContacto(Contacto contacto) {
        getContactos().add(contacto);
    }

    public Cuenta getCuenta() {
        return cuenta;
    }
    public void setCuenta(Cuenta cuenta) {
        this.cuenta = cuenta;
    }
    public int totalRecibidos(){
        return getCuenta().getRecibidos().size();
    }
    public int totalEnviado(){
        return getCuenta().getEnviados().size();
    }
    public int totalEmails(){
        return totalRecibidos() + totalEnviado();
    }
    public int totalSinLeer(){
        return cuenta.sinLeer();
    }
    public int totalContactos(){
        return getContactos().size();
    }
    public void addRecivedMail(Mail mail) {
        getCuenta().addRecibido(mail);
    }

}
