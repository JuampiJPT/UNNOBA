import ar.edu.unnoba.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        ProductoSimple uno = new ProductoSimple(150,50);
        ProductoSimple dos = new ProductoSimple(100,75);
        ProductoSimple dos2 = new ProductoSimple(3000,80);
        ProductoSimple dos3 = new ProductoSimple(200,90);
        ProductoSimple dos4 = new ProductoSimple(200,80);
        ProductoSimple dos5 = new ProductoSimple(200,90);
        ProductoSimple dos6 = new ProductoSimple(200,80);
        ProductoSimple dos7 = new ProductoSimple(200,90);
        Caja caja = new Caja();
        Caja caja2 = new Caja();
        caja.agregarProductoSimple(dos7);
        caja.agregarProductoSimple(dos6);
        caja2.agregarProductoSimple(dos5);
        caja2.agregarProductoSimple(dos4);
        Container contenedor = new Container(12,"junin",15000);
        Container contenedor2 = new Container(15,"LT",16000);
        contenedor.agregarProducto(caja);
        contenedor.agregarProducto(uno);
        contenedor.agregarProducto(dos);
        contenedor2.agregarProducto(dos2);
        contenedor2.agregarProducto(dos3);
        contenedor2.agregarProducto(caja2);

        CompaniaDeLogistica compania = new CompaniaDeLogistica();
        compania.agregarContenedor(contenedor);
        compania.agregarContenedor(contenedor2);
        System.out.println(compania.calcularPesoContenerdores());
        System.out.println(compania.calcularPrecioContenerdores());

        }
    }
