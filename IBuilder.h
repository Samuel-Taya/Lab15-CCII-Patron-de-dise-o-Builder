#ifndef IBUILDER_H
#define IBUILDER_H

class IBuilder { // clase abstracta; esta se utiliza como clase base por herencia
public:
virtual ~IBuilder() {} 
// funciones virtuales pura
virtual void ProducirParteA() const = 0; 
virtual void ProducirParteB() const = 0;
virtual void ProducirParteC() const = 0;
};

#endif