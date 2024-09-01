package ar.edu.unnoba;

public class TransaccionInternacional extends Transaccion{
    public TransaccionInternacional(double monto, Banco bancoDestino, Cliente clienteDestino){
        super(monto,bancoDestino,clienteDestino,0.07);
    }

    @Override
    public double calcValor() {
        return conversion()+getImpuesto();
    }

    @Override
    public double calcImpuesto() {
        return conversion()*getImpuesto();
    }
}
