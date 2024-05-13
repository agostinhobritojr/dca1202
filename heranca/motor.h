#ifndef MOTOR_H
#define MOTOR_H

#include "equipamento.h"

class Motor : public Equipamento{
    float potencia;
    float velocidade;
public:
    void setPotencia(float _potencia);
    void setVelocidade(float _velocidade);
    float getPotencia(void);
    float getVelocidade(void);
};

#endif // MOTOR_H
