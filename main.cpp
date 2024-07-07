#include <iostream>
#include <limits>

using namespace std;


void IevaditMasivu(int** masivs, int rindas, int kolonnas) {
    for (int i = 0; i < rindas; i++) { 
        for (int j = 0; j < kolonnas; j++) { 
            while (!(cin >> masivs[i][j])) { 
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
}

int* IzveidotViendimensijuMasivu(int** masivs, int rindas, int kolonnas) {
    int* viendimensijasMasivs = new int[kolonnas];
    for (int j = 0; j < kolonnas; j++) { 
        int mazakais = masivs[0][j]; 
        for (int i = 1; i < rindas; i++) { 
            if (masivs[i][j] < mazakais) {
                mazakais = masivs[i][j];
            }
        }
        viendimensijasMasivs[j] = mazakais;
    }
    return viendimensijasMasivs;
}

void IzvaditMasivu(int* masivs, int garums) {
    cout << "result: ";
    for (int i = 0; i < garums; i++) {
        cout << masivs[i] << " ";
    }
    cout << endl;
}

int main() {
    int rindas, kolonnas;

    while (!(cin >> rindas) || rindas <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    while (!(cin >> kolonnas) || kolonnas <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int** divdimensijuMasivs = new int*[rindas];
    for (int i = 0; i < rindas; i++) {
        divdimensijuMasivs[i] = new int[kolonnas];
    }

    IevaditMasivu(divdimensijuMasivs, rindas, kolonnas);

    int* viendimensijasMasivs = IzveidotViendimensijuMasivu(divdimensijuMasivs, rindas, kolonnas);

    IzvaditMasivu(viendimensijasMasivs, kolonnas);

    for (int i = 0; i < rindas; i++) {
        delete[] divdimensijuMasivs[i];
    }
    delete[] divdimensijuMasivs;
    delete[] viendimensijasMasivs;

    return 0;
}
