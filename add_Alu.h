#include <iostream>
#include <systemc.h>


class sumalu : public sc_module{

    public:

        sc_in<sc_int<32>> aIn/*ReadData1*/, bIn/*mux*/, scAlu/*AluControl*/;
        sc_out<sc_int<32>> cOut/*DataMemori*/, 
        sc_out<bool> zero/*Branch*/;
        
        SC_CTOR(sumalu);
        ~sumalu();


    private:
        void process();
        void suma();
        void resta();
        void mult();
        void salt(int s);
        void and1();
        void or1();
       // void not1();
        void div();
        void modu();
};