package main

import "fmt"

type Fecha struct {
    dia   int
    mes   int
    año   int
    meses [12]int
}

func (F *Fecha) newFecha() {
    F.meses = [12]int{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
}

func (F *Fecha) agregarFecha(dia int, mes int, año int) {
    if mes <= 12 && mes > 0 && año < 9999 {
        F.mes = mes
        F.año = año
    } else {
        fmt.Println("El mes o año indicado es incorrecto")
        return
    }

    // Verificar si el año es bisiesto y ajustar febrero si es necesario
    if mes == 2 && dia==29 {
        if (año%4 == 0 && año%100 != 0) || año%400 == 0 {
            F.meses[1]++
        } else {
            fmt.Println("El año no es bisiesto")
        }
    }

    // Verificar si el día es válido
    if dia > 0 && dia <= F.meses[F.mes-1] {
        F.dia = dia
    } else {
        fmt.Println("El día indicado es incorrecto para el mes y año dados")
        return
    }
}

func (F *Fecha) imprimirFecha() {
    if F.dia != 0 {
        fmt.Println( F.dia, "/" , F.mes, "/" , F.año)
    } else {
        fmt.Println("La fecha ingresada anteriormente no es válida")
    }
}

func(F *Fecha) obtenerDia() int{
	return F.dia;
}

func(F *Fecha) obtenerMes() int{
	return F.mes;
}

func(F *Fecha) obtenerAño() int{
	return F.año;
}

func (f *Fecha) compararFecha(otraFecha Fecha) int {
    if f.año > otraFecha.año {
        return 1
    } else if f.año < otraFecha.año {
        return -1
    }

    if f.mes > otraFecha.mes {
        return 1
    } else if f.mes < otraFecha.mes {
        return -1
    }

    if f.dia > otraFecha.dia {
        return 1
    } else if f.dia < otraFecha.dia {
        return -1
    }

    return 0
}


func main() {
    var fecha Fecha
	var otraFecha Fecha
    fecha.newFecha()
	otraFecha.newFecha()
    fecha.agregarFecha(29, 2, 2024)
	fecha.imprimirFecha();
    otraFecha.agregarFecha(29,2,2020);
	otraFecha.imprimirFecha();
	fmt.Println(fecha.compararFecha(otraFecha));
}

