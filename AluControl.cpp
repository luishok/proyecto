#include "AluControl.h"


AluC :: AluC (sc_module_name nm) : sc_module(nm){
    SC_METHOD(process);
    sensitive << aIn /*<< bIn*/;
    



}

void AluC :: process(){




}

AluC::~AluC() {}