#include <main>
using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));   //Seed random number generator
    
    string nomi[n];
    string nazionali[n];
    double tempi[n];

    tempi[n] = 0;
    cout << "quanti atleti ci sono in gara?" << endl;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci il nome dell'atleta" << endl;
        cin >> nomi[i];
        cout << "inserisci la nazionalità" << endl;
        cin >> nazionali[i];
        tempi[i] = (double) (900 + rand() % 400) / 100;
        cout << tempi[i] << endl;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "l'atleta" << nomi[i] << "con la sua nazionalità" << nazionali[i] << " ha totalizzato il tempo" << tempi[i] << endl;
    }
    int min;

    imin = 0;
    min = (int) tempi[0];
    for (i = 0; i <= n - 1; i++) {
        if (tempi[i] < min) {
            imin = i;
            min = (int) tempi[i];
        }
    }
    cout << "l'atleta vincitore" << nomi[imin] << "nazionale" << nazionali[imin] << " il suo tempo è" << tempi[imin] << endl;
    
}

