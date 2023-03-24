
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
    plik.open("tablice.txt", ios::out);//pisanie czygos mozna dac swoja nazwe pliku
    if (plik.is_open()) {
        cout << "poprawnie otwarto plik \n";
        plik << "pierwsza tablica: ";
        for (int i = 0; i < n; i++) {
            plik << tablica[i] << " ";
        }
        plik << "\ndruga tablica: ";
        for (int i = 0; i < n; ++i) {
            plik << tablica1[i] << " ";
        }
    }
    else {
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

