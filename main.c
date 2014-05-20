#include "API.h"

int main(void) {

    DovahkiinP dragon = NULL;
    Lado lado;
    
    dragon = NuevoDovahkiin();
    lado = LeerUnLado();
    
    while(lado != LadoNulo) {
        CargarUnLado(dragon, lado);
        lado = LeerUnLado();
    }
    
    return 1;
}
