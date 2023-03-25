#include "Zadanie.h"
#include <fstream>
#include <iostream>
using namespace std;
int tablica[5];
int tablica1[5];
int poprawne = 1;
int n;
void funkcje::dodawanieTablic() {
    cout << "ile liczb chcesz dac do tablicy?";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "podaj " << i + 1 << " liczbe: ";
        cin >> tablica[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "podaj " << i + 1 << " liczbe: ";
        cin >> tablica1[i];
    }

}
void funkcje::zapisPliku() {
    fstream plik;
    plik.open("takok.txt", ios::out);
    if (plik.is_open()) {
        plik << "otworzyles go: "<<endl;
        cout << "poprawnie otwarto plik \n";
        plik<<"tablica pierwsza: ";
        for (int i = 0; i < n; i++)
        {
            plik << tablica[i] << " ";
        }
        plik<<endl<<"druga tablica: ";
        for(int x=0;x<n;x++){
            plik << tablica1[x] << " ";
        }






        plik.close();
    } else {
        cout << "nie moge otworzyc badz stworzyc pliku";
    }

}
void funkcje::poruwnywanieTablic() {
    for (int i = 0; i < n; ++i) {
        if (tablica[i] != tablica1[i]) poprawne = 0;

    }
    if (poprawne) {
        cout << "te dwie tablice maja identyczne liczby ";
    }
    else {
        cout << "te dwie tablice nie maja identycznych liczb";
    }

}
