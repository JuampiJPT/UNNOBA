import ar.edu.unnoba.*;


//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.


public class Main {
    public static void main(String[] args) {
    Persona titular= new Persona("jp","taglia",20);
    CajaDeAhorros cajita = new CajaDeAhorros(titular,1500000);
    CuentaCorriente cc = new CuentaCorriente(titular,50000);

    cc.depositar(150);
    System.out.println(cc.getSaldo());
    cc.extraer(20000000);
    cc.extraer(150);
    System.out.println(cc.getSaldo());

    }
}