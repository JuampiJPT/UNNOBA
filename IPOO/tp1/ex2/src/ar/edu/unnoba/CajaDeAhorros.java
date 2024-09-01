package ar.edu.unnoba;

public class CajaDeAhorros extends CuentaBancaria{
    private int extracciones;
    public CajaDeAhorros(Persona titular, double saldo) {
        super(titular,saldo,10);
        setExtracciones(5);
    }

    public int getExtracciones() {
        return extracciones;
    }

    public void setExtracciones(int extracciones) {
        this.extracciones = extracciones;
    }

    public void extraer(double monto){
        if(getSaldo()-monto>=getLimite() && getExtracciones()>0){
            setSaldo(getSaldo()-monto);
            setExtracciones(getExtracciones() - 1);
            agregarTransaccion(new Transaccion("extraccion", monto));
        }else{
            System.out.println("El monto es muy grande o excedio el limite de extracciones");
        }
    }
}

