package ar.edu.unnoba;

public class Punto {
    private int x;
    private int y;
    public Punto(int x, int y) {
        this.setX(x);
        this.setY(y);
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void sumar(int x, int y) {
        setX(getX()+x);
        setY(getY()+y);
    }
    public void suma(Punto p) {
        setX(getX()+p.getX());
        setY(getY()+p.getY());
    }
    public double distancia(Punto p) {
        return Math.sqrt(Math.pow(getX() - p.getX(), 2) + Math.pow(getY() - p.getY(), 2));
    }
}
