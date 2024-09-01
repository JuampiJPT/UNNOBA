import ar.edu.unnoba.Punto;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main( String[] args ) {
    Punto punto = new Punto(3,4);
    Punto punto2 = new Punto(5,6);
    System.out.println(punto.distancia(punto2));
        }
    }
