 #include "add_Alu.h"

sumalu :: sumalu (sc_module_name nm) : sc_module(nm){
    SC_METHOD(process);
    sensitive << aIn << bIn << scAlu;
   //RELOJ?
}

//MATEMATICAS
void sumalu :: suma(){

    cOut.write(aIn.read() + bIn.read());

}
void sumalu :: resta(){

    cOut.write(aIn.read() - bIn.read());//Revisar

}
void sumalu :: mult(){

    c0ut.write(aIn.read() * bIn.read());
    /*int aux = aIn.read();
    int aux2 = 0;
    for(int i = 0; i < aux ; i++){
        aux2 = aux2 + bIn.read();
    }
    cOut.write(aux2);*/
}
void sumalu :: div(){
    //a/b
    c0ut.write(aIn.read() / bIn.read());

}
void sumalu :: modu(){
    //%a/b
    c0ut.write(aIn.read() % bIn.read());

}

//Desplazamiento 
void sumalu :: salt(int salto){
    

    switch(salto){//Comparacon 1== 2!=, 3>= 4<=

        case 1://==
            if(aIn.read()==bIn.read()){

                zero.write() = 1;
            }
                        
        break;

        case 2://!=
            if(aIn.read()!=bIn.read()){

                zero = 1;
            }
        break;

        case 3://>=
            if(aIn.read()>=bIn.read()){

                zero = 1;
            }

        break;

        case 4://<=
            if(aIn.read()<=bIn.read()){

                zero = 1;
            }

        break;

    }

}
//comparacion
void sumalu :: and1(){

    cOut.write(aIn.read() and bIn.read());

}
void sumalu :: or1(){

    cOut.write(aIn.read() or bIn.read());
}
/*void sumalu :: not1(){//revisar 1 in 1 out

    x=(Ain.read() and Bin.read());
        C0ut.write(!x);   "!x es NOT"

}
*/

void sumalu :: process(){

    switch(scAlu){//señal de control

        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;



    }

}


sumalu::~sumalu() {}