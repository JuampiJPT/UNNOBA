package ar.edu.unnoba;

public class CuentaCorriente extends CuentaBancaria {
    public CuentaCorriente(Persona titular, double saldo) {
        super(titular, saldo, -150);
    }
    public void extraer(double monto){
        if(getSaldo()-monto>=getLimite()) {
            setSaldo(getSaldo() - monto);
            agregarTransaccion(new Transaccion("extraccion", monto));
        }else{
            System.out.println("El saldo excede el limite");
        }

    }
}
