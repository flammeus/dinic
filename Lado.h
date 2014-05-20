#ifndef _LADO_H
#define _LADO_H

#include <stdbool.h>
#include "Typedef.h"

struct Lado {
    bool es_nulo;
	VerticeP x, y;
    u64 c, f;
};

LadoP crear_lado(VerticeP x, VerticeP y, u64 c);
void *destruir_lado(void *lado);
VerticeP tomar_x(LadoP lado);
VerticeP tomar_y(LadoP lado);
#endif
