#include <iostream>
#include <string>
using namespace std;

int main() {

    double total,t_desc;
    string membresia;

    cout<<"Total de la compra: ";
    cin>>total;

    cout<<"El cliente cuenta con membresia (responda si o no): ";
    cin>>membresia;

    if (membresia == "si") {
        if (total>100) {
            t_desc = total - total*0.2;
            cout<<"Se aplica un descuento de 20%. Debe pagar "<<t_desc<<" soles.";
        }
        else {
            t_desc = total-total*0.1;
            cout<<"Se aplica un descuento de 10%. Debe pagar "<<t_desc<<  " soles.";
        }
    }
    else {
        if (total>100) {
            t_desc=total-total*0.1;
            cout<<"Se aplica un descuento de 10%. Debe pagar "<<t_desc<< " soles.";
        }else {
                t_desc=total-total*0.05;
                cout<<"Se aplica un descuento de 5%. Debe pagar "<<t_desc<<" soles.";
            }
        }
    





    return 0;
}

