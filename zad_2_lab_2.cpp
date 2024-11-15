
#include <iostream>
#include <iomanip>

using namespace std;

int zliczLiteryA(char tekst[]);
int zliczZnak(char tekst[],char znak);
void statystykaTekstu(char tekst[]);
int wynik(char tekst[]);

int main()
{
    char znak[1024]{}, znaczek{};

    cout << "Wprowadz tekst: " << endl;
    cin.get(znak, 1024);
    cout<<"Liter a jest: " << zliczLiteryA(znak) << endl;
    cout << "Wprowadz znak do znalezienia: " << endl;
    cin >> znaczek;
    cout <<"Liter "<<znaczek<<" jest: " << zliczZnak(znak, znaczek) << endl;

    statystykaTekstu(znak);
    
    system("pause");

}
int wynik(char tekst[]) {
    int wynik = 0;
    for (int i = 0; i < 1024; i++) {
        if (tekst[i] != 0) {
            wynik += 1;
        }
        else {
            break;
        }
    }
    return wynik;
}
//pierwsza funkcja
int zliczLiteryA(char tekst[]){
    int liczba=0;
    
    for (int i = 0; i <wynik(tekst); i++) {
        if (tekst[i] == 'a'|| tekst[i] == 'A') {
            liczba += 1;
        }
    }
    return liczba;
}
//druga funkcja
int zliczZnak(char tekst[], char znak) {
    int liczba = 0;
    for (int i = 0; i < wynik(tekst); i++) {
        if (tekst[i] == znak) {
            liczba += 1;
        }
    }
    return liczba;
}
void statystykaTekstu(char tekst[]) {
    int liczba = 0, cyfra=97;
    for (int i = 0; i < wynik(tekst); i++) {
        if (tekst[i] == ' ') {
            liczba += 1;
        }
        
    }
    cout << "Liczba spacji wynosi: " << liczba << endl;
    liczba = 0;
    for (int i = 0; i < wynik(tekst); i++) {
        if (tekst[i] == 98) {
            liczba += 1;
        }
       
    }
    cout << "Liczba b wynosi: " << liczba << endl;
    liczba = 0;
    cyfra += 1;
}
