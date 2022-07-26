# include <iostream>

struct Fecha {
    short dia;
    short mes;
    int agno;

    Fecha(short dia_, short mes_, int agno_): dia(dia_), mes(mes), agno(agno_) {};
};


Fecha makeFecha(short& dia, short& mes, int& agno) {

    Fecha fecha = {dia, mes, agno};
    return fecha;
}

void printFecha(Fecha& fecha) {

    std::cout << "Fecha: " << fecha.dia << ", " << fecha.mes << ", " << fecha.agno << std::endl;
}

Fecha readFecha() {

    short dia, mes;
    int agno;

    std::cin >> dia >> mes >> agno;

    Fecha fecha = {dia, mes, agno};
    return fecha;
}


int main() {

    Fecha fecha = Fecha(0, 0, 0);

    fecha = readFecha();

    printFecha(fecha);
}

