
#include <iostream>
#include <iomanip>

using namespace std;

void odwroc(char tekst[]);

int main()
{
    char znak[1024]{};

    cout << "Wprowadz tekst: " << endl;
    cin.get(znak, 1024);
    odwroc(znak);

    system("pause");
}
void odwroc(char tekst[1024]) { 
    int wynik = 0;
    for (int i = 0; i < 1024; i++) {
        if (tekst[i]!=0) {
            wynik += 1;
        }
        else {
            break;
        }
    }
    for (int i = wynik; i >=0; i--) {
        cout << tekst[i];
    }
    cout << endl;
}

