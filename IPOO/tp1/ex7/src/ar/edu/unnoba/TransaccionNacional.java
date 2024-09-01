package ar.edu.unnoba;

public class TransaccionNacional extends Transaccion{
    public TransaccionNacional(double monto, Banco bancoDestino, Cliente clienteDestino){
        super(monto,bancoDestino,clienteDestino,0.03);
    }
    public double calcValor(){
        return getMonto()+calcImpuesto();
    }
    public double calcImpuesto(){
        return getMonto()*getImpuesto();
    }
}
