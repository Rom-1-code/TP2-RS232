
#include "RS232.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


using namespace std;



int main()
{

    char selection;

    cout << "\n       Menu";

    cout << "\n=====================";

    cout << "\n 1 - Ouvrir Port";

    cout << "\n 2 - Lire Port";

    cout << "\n 3 - Ecrire Port";

    cout << "\n 4 - Fermer Port";

    cout << "\n 5 - Exit \n";

    cout << "\n Enter votre choix: ";

    // read the input

    cin >> selection;


    switch (selection)

    {

    

    case '1': {cout << "\n Vous avez ouvert le port \n"; }

            break;

    

    case '2': {cout << "\n To modify a record"; }

            break;

    

    case '3': {cout << "\n To delete a record"; }

            break;

   

    case 'x': {cout << "\n To exit the menu"; }

            break;

            // other than A, M, D and X...

    default: cout << "\n Invalid selection";

        // no break in the default case

    }

    cout << "\n";


    system("PAUSE");
    return 0;
}


