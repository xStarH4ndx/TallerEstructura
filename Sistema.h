#include <iostream>

class Sistema{
    public:

        //inicio del main
        virtual void poblarUsuarios()=0;

        //probador
        virtual void encender()=0;
        virtual void apagar()=0;
        virtual void reiniciar()=0;
};