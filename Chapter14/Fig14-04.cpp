// Fig. 14.4: fig14_04.cpp

// Stack class template test program. Function main uses a function template to
// manipulate objects of type Stack< T >.


#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;


template< typename T >
void testStack(Stack<T> &theStack,
               T value,
               T increment,
               const string stackName)
{
    cout << "\nPushing elements onto " << stackName << '\n';

    while( theStack.push(value) )
    {
        cout << value << ' ';

        value += increment;
    }

    cout << "\nStack is full. Cannot push " << value
         << "\n\nPopping elements from " << stackName << '\n';

    while( theStack.pop(value) )
        cout << value << ' ';

    cout << "\nStack is empty. Cannot pop." << endl;
}


int main()
{
    Stack< double > doubleStack(5);
    Stack< int > intStack;

    testStack(doubleStack, 1.1, 1.1, "doubleStack");

    testStack(intStack, 1, 1, "intStack");
}
