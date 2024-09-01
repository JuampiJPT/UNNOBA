package ar.edu.unnoba;

import java.util.Date;

public class Clima {
    private String ciudad;
    private String provincia;
    private float temperaturaActual;
    private float temperaturaMinima;
    private float temperaturaMaxima;
    private float pressure;
    private String dirreccionDelViento;
    private float velocidadViento;
    private float humedad;
    private float visibilidad;
    private Date ultimaActualizacion;
    private boolean isCelcius;

    public Clima(String ciudad, String provincia, float temperaturaActual,float temperaturaMaxima,float temperaturaMinima, float pressure, String dirreccionDelViento, float velocidadViento, float humedad, float visibilidad, boolean isCelcius) {
        setCiudad(ciudad);
        setProvincia(provincia);
        setTemperaturaActual(temperaturaActual);
        setTemperaturaMinima(temperaturaMinima);
        setTemperaturaMaxima(temperaturaMaxima);
        setPressure(pressure);
        setDirreccionDelViento(dirreccionDelViento);
        setVelocidadViento(velocidadViento);
        setHumedad(humedad);
        setVisibilidad(visibilidad);
        setUltimaActualizacion();
        setCelcius(isCelcius);
    }
    public String getCiudad() {
        return ciudad;
    }

    public void setCiudad(String ciudad) {
        this.ciudad = ciudad;
    }

    public String getProvincia() {
        return provincia;
    }

    public void setProvincia(String provincia) {
        this.provincia = provincia;
    }

    public float getTemperaturaActual() {
        return temperaturaActual;
    }

    public void setTemperaturaActual(float temperaturaActual) {
        this.temperaturaActual = temperaturaActual;
    }

    public float getTemperaturaMinima() {
        return temperaturaMinima;
    }

    public void setTemperaturaMinima(float temperaturaMinima) {
        this.temperaturaMinima = temperaturaMinima;
    }

    public float getTemperaturaMaxima() {
        return temperaturaMaxima;
    }

    public void setTemperaturaMaxima(float temperaturaMaxima) {
        this.temperaturaMaxima = temperaturaMaxima;
    }

    public float getPressure() {
        return pressure;
    }

    public void setPressure(float pressure) {
        this.pressure = pressure;
    }

    public String getDirreccionDelViento() {
        return dirreccionDelViento;
    }

    public void setDirreccionDelViento(String dirreccionDelViento) {
        this.dirreccionDelViento = dirreccionDelViento;
    }

    public float getVelocidadViento() {
        return velocidadViento;
    }

    public void setVelocidadViento(float velocidadViento) {
        this.velocidadViento = velocidadViento;
    }

    public float getHumedad() {
        return humedad;
    }

    public void setHumedad(float humedad) {
        this.humedad = humedad;
    }

    public float getVisibilidad() {
        return visibilidad;
    }

    public void setVisibilidad(float visibilidad) {
        this.visibilidad = visibilidad;
    }

    public Date getUltimaActualizacion() {
        return ultimaActualizacion;
    }

    public void setUltimaActualizacion() {
        this.ultimaActualizacion = new Date();
    }

    public boolean isCelcius() {
        return isCelcius;
    }

    public void setCelcius(boolean celcius) {
        isCelcius = celcius;
    }
}
