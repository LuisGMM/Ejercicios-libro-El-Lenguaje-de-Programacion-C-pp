

struct Fecha {
    short dia;
    short mes;
    int agno;

    
};


Fecha makeFecha(short dia, short mes, int agno) {

    return Fecha(dia, mes, agno); 
}

