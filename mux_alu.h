#include <systemc.h>
#include <iostream>

class mux : public sc_module{

    public: 
        sc_in<sc_int<32>> SrcAlu/*ALUSrc*/, d0In/*readData2*/, d1In//immGen;
        sc_out<sc_int<32>> f0out//ADDALU;
        //sc_in/out<sc_int<8>> aIn, bIn;

        SC_CTOR(mux);
        ~mux();

    private:
        void process();



};