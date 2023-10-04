#pragma once
#include <iostream>

class Sistema {
public:
    virtual void poblarUsuarios() =0;
    
    virtual ~Sistema() {}
};
