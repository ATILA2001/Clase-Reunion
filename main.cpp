#include <iostream>
#include "persona.h"
#include "reunion.h"

using namespace std;

int main()
{
    persona p1("BRIAN","LARA");
    persona p2("ANGEL","SIMON");

    cout << p1.getNombreApellido() << endl;

    //Reunion reunion(2);

    return 0;
}
