#ifndef IBUILDER_H
#define IBUILDER_H

class IBuilder {
public:
virtual ~IBuilder() {}
virtual void ProducirParteA() const = 0;
virtual void ProducirParteB() const = 0;
virtual void ProducirParteC() const = 0;
};

#endif