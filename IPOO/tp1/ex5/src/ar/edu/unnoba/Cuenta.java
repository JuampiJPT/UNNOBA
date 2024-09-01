package ar.edu.unnoba;

import java.util.Vector;

public class Cuenta {
    private Vector<Mail> recibidos;
    private Vector<Mail> enviados;
    private String nombre;
    private String userMail;
    public Cuenta() {}

    public Vector<Mail> getRecibidos() {
        return recibidos;
    }

    public void setRecibidos() {
        this.recibidos = new Vector<>();
    }
    public void addRecibido(Mail mail) {
        this.recibidos.add(mail);
    }

    public Vector<Mail> getEnviados() {
        return enviados;
    }

    public void setEnviados() {
        this.enviados = new Vector<>();
    }
    public void addEnviado(Mail mail) {
        this.enviados.add(mail);
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getUserMail() {
        return userMail;
    }

    public void setUserMail(String userMail) {
        this.userMail = userMail;
    }
public int mailSinLeer(Mail mail) {
        if(!mail.isVisto()){
            return 1;
        }
        return 0;
}

public int sinLeer(){
        int suma = 0;
        if(getRecibidos().size()>0){
            for(Mail mail : getRecibidos()){
                suma+=mailSinLeer(mail);
            }
        }
        return suma;
}
}
