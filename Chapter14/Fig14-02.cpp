// Fig. 14.2: Stack.cpp

// Stack class template.


template< typename T >
Stack<T>::Stack(int s)
         : s(s > 0 ? s : 10),
           top(-1),
           stackPtr( new T[size] )
{
}


template< typename T >
Stack<T>::~Stack()
{
    delete [] stackPtr;
}


template< typename T >
bool Stack<T>::push(const T &pushValue)
{
    if( !isFull() )
    {
        stackPtr[++top] = pushValue;

        return true;
    }

    return false;
}


template< typename T >
bool Stack<T>::pop(T &popValue)
{
    if( !isEmpty() )
    {
        popValue = stackPtr[top--];

        return true;
    }

    return false;
}


template< typename T >
bool Stack<T>::isEmpty() const
{
    return top == -1;
}


template< typename T >
bool Stack<T>::isFull() const
{
    return top == size - 1;
}
