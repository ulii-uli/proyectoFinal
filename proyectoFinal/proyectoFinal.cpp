                                    // proyectoFinal.cpp : universidad tecnologica del valle de toluca 
                                      //gabriel ulises martinez gutierrez 
                                    //Grupo DDM-13
//Grupo DDM-13


#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<locale.h> // para la letra ñ pero no responde en otra maquina funciona
#include<iomanip> // para imprimir dos o un dijitos a aparti del punto decimal


using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");


    int opc=0, pantH=0, numeroDp, cami,playe,servi;
    double precio, total,iva,cuentt;
    float kil ,killC,paqe;


    cout <<"\t\t\tbienvenido GODADDY  ño :3? ñ \n";
    cout <<"\t\t\thola bienvenidos :3 \n\n ";

            while (opc != 5)
            {



                            cout << "\t\t\t MENU \n";
                            cout << "\t\t\t  1.- pantalones de hombre\n";
                            cout << "\t\t\t  2.- Camisas de vestir\n ";
                            cout << "\t\t\t  3.- playera de hombre y niño \n";
                            cout << "\t\t\t  4.- servicios de paqueteria :) \n";
                            cout << "\t\t\t  5.- salir \n";
                            cout << "\t\t\t  esoga su opcionnes \n";
                            cin >> opc;


                  if (opc == 1)

                {

                            cout << "\t\t\t ESCOGIO PATALONES DE HOMBRE \n";

                            cout << "\t\t\t  1.- pantalones de hombre color  negro.......precio $600\n";
                            cout << "\t\t\t  2.- pantalones de hombre color  gris........precio $750 \n";
                            cout << "\t\t\t  3.- pantalones de hombre color  rojo........precio $590\n";
                            cout << "\t\t\t  4.- pantalones de hombre color  azul marino.precio $900 \n";
                            cout << "\t\t\t  5.- pantalones de hombre color  cafe........precio $800 \n";
                            cout << "\t\t\t  esoga su opcion de compra \n";
                            cin >> pantH;
                            cout << "*****************************************************************************************************************************\n";

            if (pantH == 1)
            {
                                precio = 600;

                                cout << "\t\t\t  usted escogio los pantalones negros \n";
                                cout << "\t\t\t  el precio es de $600 pesos \n";
                                cout << "\t\t\t  cuantos desea comprar \n ";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t  el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cuentt = iva;
                                cout << "´******************************************************************************************************************\n";


            



                            cout << "´***********************************************************************************************************************\n";

        }
            else if (pantH == 2)

        {
                            precio = 750;
                            cout << "\t\t\t usted escogio la secion de pantalones gris \n";
                            cout << "\t\t\t el precio es de $750 pesos por pieza \n";
                            cout << "\t\t\t cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;

                            cuentt = iva;
                            cout << "´******************************************************************************************************************\n";
        }
            else if (pantH == 3)

        {
                            precio = 590;
                            cout << "\t\t\t usted escogio la secion de pantalones color rojo \n";
                            cout << "\t\t\t el precio es de $590 pesos por pieza \n";
                            cout << "\t\t\t cuantos desea comprar \n";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t  el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "´*******************************************************************************************************************************\n";

        }
            
        else if (pantH == 4)

        {
                            precio = 900;
                            cout << "\t\t\t usted escogio la secion de pantalones auzl marino \n";
                            cout << "\t\t\t el precio es de $900 pesos por pieza \n";
                            cout << "\t\t\t cuantos desea comprar \n";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "****************************************************************************************************************************\n";

        }
        else if (pantH == 5)

        {
                            precio = 800;
                            cout << "\t\t\t usted escogio la secion de pantalones de color cadfe\n";
                            cout << "\t\t\t el precio es de $800 esos por pieza \n";
                            cout << "\t\t\t cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "´*************************************************************************************************************************\n";

        }
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
                            cout << "´**************************************************************************************************************\n";
            if (cami == 1)
            {
                            cout << "hole";
           
                            precio = 865.60;
                            cout << "\t\t\t  usted escogio la secion de camisas \n";
                            cout << "\t\t\t  el precio es de $865.0 pesos por pieza \n";
                            cout << "\t\t\t  cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout <<"\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva<< endl; 
                                                                                            // << fixed << setprecision(2) para precicion de dos decimales
                            cuentt = iva;
                                                                                                                                             
                            cout << "´************************************************************\n";

            }
            else if (cami == 2)
            {
                                precio = 450.99;
                                cout << "\t\t\t  usted escogio la secion de camisas \n";
                                cout << "\t\t\t  usted escogio camisas blanca lisa\n\n";
                                cout << "\t\t\t  el precio es de $800.0 pesos por pieza\n";
                                cout << "\t\t\t  cuantos desea comprar \n ";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cuentt = iva;
                                cout << "\t\t\t  **************************************************************************************************n";
            }
            else if (cami == 3)
                    {
                                precio = 570.60;
                                cout << "\t\t\t  usted escogio la secion de camisas \n";
                                cout << "\t\t\t  camisas de cuadros talla chica \n";
                                cout << "\t\t\t  usted escogio camisas blanca lisa\n";
                                cout << "\t\t\t  el precio es de $570.60 pesos por pieza\n";
                                cout << "\t\t\t  cuantos desea comprar \n";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cuentt = iva;
                                cout << "\t\t\t *************************************************************************************************\n";
                    }
            else if (cami == 4)
            {
                                precio = 250.00;
                                cout << "\t\t\t usted escogio la secion de camisas \n";
                                cout << "\t\t\t usted escogio camisas blanca lisa\n";
                                cout << "\t\t\t el precio es de $250.00 pesos por pieza\n";
                                cout << "\t\t\t cuantos desea comprar \n\n ";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t   el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cuentt = iva;
                                cout << "\t\t\t **********************************************************************************************\n";
            }
            else if (cami == 5)
            {
                                precio = 290.50;
                                cout << "\t\t\t   usted escogio la secion de camisas \n";
                                cout << "\t\t\t   camisas de niño \n\n";
                                cout << "\t\t\t   el precio es de $290.50 pesos por pieza\n";
                                cout << "\t\t\t   cuantos desea comprar \n";
                                cin >> numeroDp;
                                total = numeroDp * precio;
                                cout << "\t\t\t   el total que debe de pagar es de:$$" << total << endl;
                                iva = total * 0.9;
                                cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                                cuentt = iva;
                                cout << "\t\t  *********+************************************************************************************\n";
                     
            }


        }

        else if (opc == 3)     //tercer opcion del menu

        {
                            cout << "\t\t\t usted a escogido la secion de playeras \n";
                            cout << "\t\t\t  1.-playera blanca con logo  chica...................$$ 340.98 \n";
                            cout << "\t\t\t  2.-playera roja y blanco de cuello redondo..........$$ 280.99 \n";
                            cout << "\t\t\t  3.-playera grande de color amariillo................$$ 670.60 \n";
                            cout << "\t\t\t  4.-playera con mangas larga de color blanco.........$$ 490.70 \n";
                            cout << "\t\t\t  5.-playera  de tirantes.............................$$ 190.50 \n";
                            cout << "\t\t\t  Porfavor escoga su opcion de compra...\n";
                            cin >> playe;
                            cout << "´*****************************************************************************************************\n";
            if (playe == 1)
            {
                            precio = 340.98;
                            cout << "\t\t\t playera blanca con logo  chica. \n";
                            cout << "\t\t\t el precio es de $ 340.98 pesos por pieza \n";
                            cout << "\t\t\t cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t  el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "\t\t\t  ***********************************************************************************************\n";
                            

            }
            else if (playe == 2)
            {
                            precio = 280.99;
                            cout << "\t\t\t playera roja y blanco de cuello redondo  \n";              
                            cout << "\t\t\t el precio es de $ 280.99 pesos por pieza\n";
                            cout << "\t\t\t cuantos desea comprar \n";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "***********************************************************************************************************\n";
            }
            else if (playe == 3)
            {
                            precio = 670.60;
                            cout << "\t\t\t playera grande de color amariillo  \n";
                            cout << "\t\t\t player de childrens \n";
                            cout << "\t\t\t el precio es de $ 670.60 pesos por pieza\n";
                            cout << "\t\t\t cuantos desea comprar \n";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "´********************************************************************************************************\n";
            }
            else if (playe  == 4)
            {
                            precio = 490.70;
                            cout << "\t\t\t playera con mangas larga de color blanco \n";
                            cout << "\t\t\t el precio es de $ 490.70 pesos por pieza\n";
                            cout << "\t\t\t cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "´*******************************************************************************************************\n";
            }
            else if (playe == 5)
            {
                            precio = 190.50;
                            cout << "\t\t\t ❤❤❤❤❤-playera  de tirantes ❤❤❤❤❤     \n";
                            cout << "\t\t\t el precio es de $ 190.50 pesos por pieza\n";
                            cout << "\t\t\t cuantos desea comprar \n ";
                            cin >> numeroDp;
                            total = numeroDp * precio;
                            cout << "\t\t\t el total que debe de pagar es de:$$" << total << endl;
                            iva = total * 0.9;
                            cout << "\t\t\t   el total con el porcentaje del iva del 0.9% es del:  " << fixed << setprecision(2) << iva << endl;
                            cuentt = iva;
                            cout << "´*****************************************************************************************************\n";
            }
        }   //3 parte del sub

        else if (opc == 4) //4 opcion del menu

        {
                            cout << "´****************************************************************************************************\n";
                            cout << "\t\t\t  servicio del envio por paqueteria :) \n";
                            cout << "\t\t\t  1.-expres DHL.......... $$365.68 \n";
                            cout << "\t\t\t  2.-envio por Fedex.....$$ 450.99 \n";
                            cout << "\t\t\t  3.-envio por entreg rapida.....$$ 690.99 \n";
                            cin >> servi;
                            switch (servi)
                            {
                                     case 1:
                            
                                                cout << "\t\t\t  usted a escogido el servicio de entrega de DHl :) \n";
                                                cout << "\t\t\t  el cobro de entrega x por kilometro ingres el  kilometros de entrega :) \n";
                                                cin >>kil;
                                                            if (kil > 1)
                                                                {
                                                                    kil = kil - 1;
                                                                    killC = kil * 500;

                                                                }
                                                            else
                                                                {
                                                                killC = 0;
                                                                }
                                                            cout << " con el cobro de distancia es de:  " << killC << endl;
                                                            

                                                        
                                                 paqe = 365.68 + cuentt + killC;
                                                cout <<"\t\t\t lo que debe de pagar es el total es de:   " <<paqe << endl;
                                                cout << "\t\t\t *******************************************************************";
                                                
                                                break;
                                     case 2:
                                    
                                                 cout << "\t\t\t  usted a escogido el servicio de entrega de FEDEX EXPREX :) \n";
                                                 cout << "\t\t\t  el cobro de entrega x por kilometro ingres el  kilometros de entrega :) \n";
                                                 cin >> kil;
                                                         if (kil > 1)
                                                         {
                                                             kil = kil - 1;
                                                             killC = kil * 490;

                                                         }
                                                         else
                                                         {
                                                             killC = 0;
                                                         }
                                                 cout << " con el cobro de distancia es de:  " << killC << endl;



                                                 paqe = 365.68 + cuentt + killC;
                                                 cout << "\t\t\t lo que debe de pagar es el total es de:   " << paqe << endl;
                                                 cout << "\t\t\t *******************************************************************";
                                                 
                                    break;

                                     case 3:
                                         cout << "\t\t\t  usted a escogido el servicio de entrega rapido :) \n";
                                         cout << "\t\t\t  el cobro de entrega x por hora  de entrega :) \n";
                                         cin >> kil;
                                         if (kil > 1)
                                         {
                                             kil = kil - 1;
                                             killC = kil * 490;

                                         }
                                         else
                                         {
                                             killC = 0;
                                         }
                                         cout << " con el cobro de horas  es de:  " << killC << endl;



                                         paqe = 365.68 + cuentt + killC;
                                         cout << "\t\t\t lo que debe de pagar es el total es de:   " << paqe << endl;
                                         cout << "\t\t\t *******************************************************************";
                                       break;
                                     default:
                                         cout << "\t\t\t escoga bien su opcion de servicio";

                            }

                            cout << "´****************************************************************\n";
            
        }
    }

   


}
