#include <iostream>
using namespace std;

class Sistema{
    public:
        virtual void metodo1() const =0;
        virtual void otrometodo() const{
            cout<<"hola sistema"<<endl;
        }
        
        virtual ~Sistema(){}
};