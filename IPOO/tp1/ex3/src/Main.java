import ar.edu.unnoba.*;

import java.util.Vector;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Colectivo sans = new Colectivo("abc","mercedes",10,45);
        Colectivo sans1 = new Colectivo("abd","mercedes",15,36);
        Chofer cido = new Chofer("cido","cidoni",19,sans);
        Chofer luki = new Chofer("luki","martino",19,sans1);
        Vector<Chofer>socios= new Vector<>();
        socios.add(luki);
        socios.add(cido);

        Vector<Colectivo>colectivos= new Vector<>();
        colectivos.add(sans);
        colectivos.add(sans1);
        Cooperativa coop = new Cooperativa(socios,colectivos);
        System.out.println(coop.realizarViaje(40,150).getNombre());
        System.out.println(coop.realizarViaje(15,47).getNombre());
        System.out.println(coop.mayorKilometro().getKilometraje());
    }
    }
