#ifndef _API_H
#define _API_H

#include <ctype.h>
#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lado.h"
#include "List.h"
#include "Typedef.h"
#include "Vertice.h"

struct DovahkiinSt {
	VerticeP fuente, resumidero;
	u64 flujo;
	list_t data, temp;
	unsigned int iteracion;
};

DovahkiinP NuevoDovahkiin();
int DestruirDovahkiin();
void FijarFuente(DovahkiinP D, u64 x);
void FijarResumidero(DovahkiinP D, u64 x);
int ImprimirFuente(DovahkiinP D);
int ImprimirResumidero(DovahkiinP D);
Lado LeerUnLado();
int CargarUnLado(DovahkiinP D, LadoP L);
int Prepararse(DovahkiinP D);
int ActualizarDistancias(DovahkiinP D);
#endif
