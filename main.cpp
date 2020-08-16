#include <iostream>

using namespace std;

int main()
{
char ch;
double cijfer, som = 0.0, gemiddelde, aantal;

int aantallen = 0;

do{
    cout << "Voer Ccijfer in ";
    cin >> cijfer;
    cin.get();

    if (cijfer < 5.5){
        cout << '\a'; //geluidsignaal
        cout << "Allemaal, onvoldoende is geen geldig cijfer" << endl;
        continue;
    }

    aantallen++;
    som +=cijfer;

    cout << '\a';
    cout << "Meer cijfers invoeren? (j of n): ";
    cin >> ch;
        while(ch !='n');
            cout << "Er zijn " << aantallen
            << " geldige cijfers ingevoerd." << endl;
        if( aantal >0 ){
            gemiddelde = som / aantal;
            cout << "Het gemiddelde is: " << gemiddelde << endl;
        }
}

