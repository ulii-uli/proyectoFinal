                                    // proyectoFinal.cpp : universidad tecnologica del valle de toluca 
                                      //gabriel ulises martinez gutierrez 
                                    //Grupo DDM-13


#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<locale.h>
#include<iomanip> // para imprimir dos o un dijitos a aparti del punto decimal


using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");


    int opc=0, pantH=0, numeroDp, cami, camisas;
    double precio, total, subT,iva;


    cout << "\t bienvenido GODADDY  ño :3? ñ \n";
    cout << "hola bebe \n\n ";

    while (opc != 5)
    {



        cout << "\t MENU \n";
        cout << "\t 1.- pantalones de hombre\n";
        cout << "\t 2.- Camisas de vestir\n ";
        cout << "\t 3.- playera de hombre y niño \n";
        cout << "\t 4.- servicios  \n";
        cout << "\t salir \n";
        cout << "\t esoga su opcionnes \n";
        cin >> opc;


        if (opc == 1)

        {

            cout << "ESCOGIO PATALONES DE HOMBRE \n";

            cout << "\t  1.- pantalones de hombre color  negro.......precio $600\n";
            cout << "\t  2.- pantalones de hombre color  gris........precio $750 \n";
            cout << "\t  3.- pantalones de hombre color  rojo........precio $590\n";
            cout << "\t  4.- pantalones de hombre color  azul marino.precio $900 \n";
            cout << "\t  5.- pantalones de hombre color  cafe........precio $800 \n";
            cout << "\t esoga su opcion de compra \n";
            cin >> pantH;
            cout << "´************************************************************\n";

            if (pantH == 1)
            {
                precio = 600;

                cout << "\t usted escogio los pantalones negros \n";
                cout << "\t el precio es de $600 pesos \n";
                cout << "\t cuantos desea comprar \n ";
                cin >> numeroDp;
                total = numeroDp * precio;
                cout << "\t el total que debe de pagar es de:$$" << total << endl;
                cout << "con el iva de tienda es :";
                subT = total * 0.9;
                cout << "\t el total que debe de pagar es de:$$" << subT << endl;



            }



            cout << "´************************************************************\n";

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
            cout << "************************************************************\n";

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
            cout << "\t\t\t usted a escogido la secion de camisas :) \n";
            cout << "\t\t\t 1.-camisa de bestir negra..........$$ 865.60 \n";
            cout << "\t\t\t 2.-camisa de color blanco lisa.....$$ 450.99 \n";
            cout << "\t\t\t 3.-camisas de cuadros talla chica..$$ 570.60 \n";
            cout << "\t\t\t 4.-camisas sin mangas chicas.......$$ 250.00 \n";
            cout << "\t\t\t 5.-camisas de niño.................$$ 150.50 \n";
            cout << "\t\t\t Porfavor escoga su opcion de compra... \n" ;
            cin >> cami;
            cout << "´************************************************************\n";
            if (cami == 1)
            {
                            cout << "hole";
           
                            precio = 865.60;
                            cout << "\t\t\t  usted escogio la secion de camisas \n\n";
                            cout << "\t\t\t  el precio es de $865.0 pesos por pieza \n\n";
                            cout << "\t\t\t  cuantos desea comprar \n\n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout <<"\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva<< endl; 
                                                                                            // << fixed << setprecision(2) para precicion de dos decimales
                                                                                                                                             
                            cout << "´************************************************************\n";

            }
            else if (cami == 2)
            {
                        precio = 450.99;
                        cout << "\t\t\t  usted escogio la secion de camisas \n\n";
                        cout << "\t\t\t  usted escogio camisas blanca lisa\n\n";
                        cout << "\t\t\t  el precio es de $800.0 pesos por pieza\n\n";
                        cout << "\t\t\t  cuantos desea comprar \n\n ";
                        cin >> numeroDp;
                        total = numeroDp * precio;
                        cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                        iva = total * 0.9;
                        cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                        cout << "\t\t\t  ************************************************************\n";
            }
            else if (cami == 3)
            {
                        precio = 570.60;
                        cout << "\t\t\t  usted escogio la secion de camisas \n\n";
                        cout << "\t\t\t  camisas de cuadros talla chica \n\n";
                        cout << "\t\t\t  usted escogio camisas blanca lisa\n\n";
                        cout << "\t\t\t  el precio es de $570.60 pesos por pieza\n\n";
                        cout << "\t\t\t  cuantos desea comprar \n\n ";
                        cin >> numeroDp;
                        total = numeroDp * precio;
                        cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                        iva = total * 0.9;
                        cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                        cout << "\t\t\t ************************************************************\n";
            }
            else if (cami == 4)
            {
                                precio = 250.00;
                                cout << "\t\t\t usted escogio la secion de camisas \n\n";
                                cout << "\t\t\t usted escogio camisas blanca lisa\n\n";
                                cout << "\t\t\t el precio es de $250.00 pesos por pieza\n\n";
                                cout << "\t\t\t cuantos desea comprar \n\n ";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t   el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cout << "\t\t\t ************************************************************\n\n";
            }
            else if (cami == 5)
            {
                        precio = 290.50;
                        cout << "\t\t\t   usted escogio la secion de camisas \n\n";
                        cout << "\t\t\t   camisas de niño \n\n";
                        cout << "\t\t\t   el precio es de $290.50 pesos por pieza\n\n";
                        cout << "\t\t\t   cuantos desea comprar \n\n ";
                        cin >> numeroDp;
                        total = numeroDp * precio;
                        cout << "\t\t\t   el total que debe de pagar es de:$$" << total << endl;
                        iva = total * 0.9;
                        cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                        cout << "\t\t  *********+*****************************************\n\n";
                        cout << "\t\t  *********+*****************************************\n\n";
            }


        }

        else if (opc == 3) //tercer opcion del menu

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




        else if (opc == 4) //4 opcion del menu

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

    cout << "\t\t  **************************\n\n";
            



}
