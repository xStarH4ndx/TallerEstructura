#include <iostream>

class Sistema{
    public:

        //inicio del main
        virtual void poblarUsuarios();

        //probador
        virtual void encender()=0;
        virtual void apagar()=0;
        virtual void reiniciar()=0;
};