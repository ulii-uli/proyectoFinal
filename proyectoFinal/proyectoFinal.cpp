// proyectoFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

    int opc=0, pantH, numeroDp, cami, camisas, ocpl;
    double precio, total;



    cout << "\t bienvenido GODADDY :3? \n";

    while (opc!= 5)
    {



        cout << "\t MENU \n";
        cout << "\t 1.- pantalones de hombre\n";
        cout << "\t 2.- Camisas de vestir\n ";
        cout << "\t 3.-  x\n";
        cout << "\t 4.-postres \n";
        cout << "\t salir \n";
        cout << "\t esoga su opcionnes \n";
        cin >> opc;


        if (opc == 1)

        {

            cout << "ESCOGIO PATALONES DE HOMBRE \n";

            cout << " 1.- pantalones de hombre color  negro.......precio $600\n";
            cout << " 2.- pantalones de hombre color  gris........precio $750 \n";
            cout << " 3.- pantalones de hombre color  rojo........precio $590\n";
            cout << " 4.- pantalones de hombre color  azul marino.precio $900 \n";
            cout << " 5.- pantalones de hombre color  cafe........precio $800 \n";
            cout << "esoga su opcion de compra \n";
            cin >> pantH;
            cout << "´************************************************************\n";

            if (pantH == 1)
            {
                precio = 600;

                cout << "usted escogio los pantalones negros \n";
                cout << "el precio es de $600 pesos \n";
                cout << "cuantos desea comprar \n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                switch (pantH = 1)
                {
                case 1:
                    cout << "\t deseas comprar mas amigo\n";

                    cout << "\t precione si o no \n";
                    cin >> opc;

                    if (opc = 1)
                    {
                        cout << "\t deseas comprar mas amigo jbjkn\n" << pantH;

                        break;
                default:
                    cout << "\t deseas comprar mas amigogbfbgfbgfbgf\n";
                    }
                }
            }



            cout << "´************************************************************\n";
            cout << "DESEA COMPRAR MAS";


        }
        else if (pantH == 2)

        {
            precio = 750;
            cout << "usted escogio la secion de pantalones gris \n\n";
            cout << "el precio es de $750 pesos por pieza \n\n";
            cout << "cuantos desea comprar \n\n ";
            cin >> numeroDp;
            total = numeroDp * precio;
            cout << "\t el total que debe de pagar es de:$$" << total << endl;
            cout << "´************************************************************\n";

        }
        else if (pantH == 3)

        {
            precio = 590;
            cout << "usted escogio la secion de pantalones color rojo \n\n";
            cout << "el precio es de $590 pesos por pieza \n\n";
            cout << "cuantos desea comprar \n\n ";
            cin >> numeroDp;
            total = numeroDp * precio;
            cout << "\t el total que debe de pagar es de:$$" << total << endl;
            cout << "´************************************************************\n";

        }
        else if (pantH == 4)

        {
            precio = 900;
            cout << "usted escogio la secion de pantalones auzl marino \n\n";
            cout << "el precio es de $900 pesos por pieza \n\n";
            cout << "cuantos desea comprar \n\n ";
            cin >> numeroDp;
            total = numeroDp * precio;
            cout << "\t el total que debe de pagar es de:$$" << total << endl;
            cout << "´************************************************************\n";

        }
        else if (pantH == 5)

        {
            precio = 800;
            cout << "usted escogio la secion de pantalones de color cadfe\n\n";
            cout << "el precio es de $800 esos por pieza \n\n";
            cout << "cuantos desea comprar \n\n ";
            cin >> numeroDp;
            total = numeroDp * precio;
            cout << "\t el total que debe de pagar es de:$$" << total << endl;
            cout << "´************************************************************\n";

        }



        //segunda parte de camisas

        else if (opc == 2) //la segunda opcion del submenu

        {
            cout << "usted a escogido la secion de camisas :) \n";
            cout << "1.-camisa de bestir negra..........$$ 865.60 \n";
            cout << "2.-camisa de color blanco lisa.....$$ 450.99 \n";
            cout << "3.-camisas de cuadros talla chica..$$ 570.60 \n";
            cout << "4.-camisas sin mangas chicas.......$$ 250.00 \n";
            cout << "5.-camisas de niño.................$$ 150.50 \n";
            cout << "Porfavor escoga su opcion de compra...";
            cin >> cami;
            cout << "´************************************************************\n";
            if (cami == 1)
            {
                precio = 865.60;
                cout << "usted escogio la secion de camisas \n\n";
                cout << "el precio es de $865.0 pesos por pieza \n\n";
                cout << "cuantos desea comprar \n\n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "´************************************************************\n";

            }
            else if (cami == 2)
            {
                precio = 450.99;
                cout << "usted escogio la secion de camisas \n\n";
                cout << "usted escogio camisas blanca lisa\n\n";
                cout << "el precio es de $800.0 pesos por pieza\n\n";
                cout << "cuantos desea comprar \n\n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "´************************************************************\n";
            }
            else if (cami == 3)
            {
                precio = 570.60;
                cout << "usted escogio la secion de camisas \n\n";
                cout << "camisas de cuadros talla chica \n\n";
                cout << "usted escogio camisas blanca lisa\n\n";
                cout << "el precio es de $570.60 pesos por pieza\n\n";
                cout << "cuantos desea comprar \n\n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "´************************************************************\n";
            }
            else if (cami == 4)
            {
                precio = 250.00;
                cout << "usted escogio la secion de camisas \n\n";
                cout << "usted escogio camisas blanca lisa\n\n";
                cout << "el precio es de $250.00 pesos por pieza\n\n";
                cout << "cuantos desea comprar \n\n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "´************************************************************\n";
            }
            else if (cami == 5)
            {
                precio = 150.50;
                cout << "usted escogio la secion de camisas \n\n";
                cout << "camisas de niño \n\n";
                cout << "el precio es de $150.50 pesos por pieza\n\n";
                cout << "cuantos desea comprar \n\n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "´************************************************************\n";
            }


        }
    }

}
