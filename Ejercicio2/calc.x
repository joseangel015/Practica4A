/*programa que define el programa : los métodos a exportar, la versión y la dirección de memoria*/
struct dupla_int { int a;
int b;
};

program CALC_PROG{ version CALC_VERS {
int SUMA(dupla_int) = 1;
int RESTA(dupla_int) = 2;
int MULTIPLICACION(dupla_int) = 3;
int DIVISION(dupla_int) = 4;
} = 1;
} = 0x23451112;

