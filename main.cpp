#include <iostream>

using namespace std;

int main()
    {
    char ch;
    double cijfer, som = 0.0, gemiddelde;

    int aantallen = 0;

    do{
        cout << "Voer Cijfer in ";
        cin >> cijfer;
        cin.get();

        if (cijfer <= 5.4){
            cout << '\a'; //geluidsignaal
            cout << "Allemaal, onvoldoende!" << endl;
            continue;
        }

        aantallen++;
        som +=cijfer;


        cout << "Meer cijfers invoeren? (j of n): ";
        cin >> ch;

        while(cin.get() != '\n'){
        cout << endl;
        }
     }
            while(ch != 'n');
                cout << "Er zijn " << aantallen << " geldige cijfers ingevoerd." << endl;
            if( aantallen >0 ){
                gemiddelde = som / aantallen;
                cout << "Het gemiddelde is: " << gemiddelde << "\n\n" << "Deze leerling is geslaagd." << endl;
            }


}

