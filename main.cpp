#include <iostream>
#include "Circular.h"
using namespace std;

int main()
{
    Circular<int> lista;
    cout<< "---------push_front and back---------------"<<endl;
    lista.push_front(10);
    lista.push_front(0);
    lista.push_front(4);

    lista.push_back(7);
    lista.push_back(8);

    cout<< "---------Lista circula---------------"<<endl;
    cout<<endl;
     lista.print();
     cout<<endl;
     cout<<endl;
    cout<< "Cantidad:"<< lista.size()<<endl<<endl;


    cout<< "---------Anterior---------------"<<endl;
    cout<< "Valor anterior:";
    lista.anterior_head();
    cout<<endl;
    cout<<endl;

    cout<< "---------siguiente---------------"<<endl;
    cout<< "Valor anterior:";
    lista.siguiente_tail();
    cout<<endl;
    cout<<endl;


    lista.pop_back();
    cout<< "-----------Pop_back-------------"<<endl;
    cout<< "Cantidad:"<< lista.size()<<endl<<endl;
    lista.print();

   cout<< "-----------~Listaligada-------------"<<endl;
    lista.~Circular();

    cout<< "Cantidad:"<< lista.size()<<endl;

    return 0;
}
