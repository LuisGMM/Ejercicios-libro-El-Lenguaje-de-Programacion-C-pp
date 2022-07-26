

struct Fecha {
    short dia;
    short mes;
    int agno;

    Fecha(short& dia_, short& mes_, int& agno_): dia(dia_), mes(mes), agno(agno_) {};
};


Fecha makeFecha(short dia, short mes, int agno) {

    return Fecha(dia, mes, agno); 
}


int main() {

    makeFecha(0, 0, 0);
}

