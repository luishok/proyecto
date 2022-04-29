#include <iostream>
#include <systemc.h>


class AluC : public sc_module{

    public:

        sc_in<sc_int<8>> aIn, /*bIn*/;
        sc_out<sc_int<8>> cOut;
        
        SC_CTOR(AluC);
        ~AluC();


    private:

        void process();

};