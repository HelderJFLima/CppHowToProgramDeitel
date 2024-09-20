// Fig. 14.2: Stack.h

// Stack class template.


#ifndef STACK_H
#define STACK_H


template< typename T >
class Stack
{

public:

    explicit Stack(int = 10);

    ~Stack();

    bool push(const T &);

    bool pop(T &);

    bool isEmpty() const;

    bool isFull() const;

private:

    int size;

    int top;

    T *stackPtr;

};


#endif // STACK_H
