#ifndef _VERTICE_H
#define _VERTICE_H

#include "Typedef.h"
#include "List.h"

struct Vertice {
	u64 nombre;
	list_t vecinos_forward;
	list_t vecinos_backward;
};


VerticeP crear_vertice(u64 nombre);
void *destruir_vertice(void *vertice);
bool comparar_vertice(void *x, void *y);

#endif
