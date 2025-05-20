#include <iostream>

using namespace std;

int main()
{
    int qnt, valor, notas[] = {100, 50, 20, 10, 5, 2, 1};

    cin >> valor;
    cout << valor << endl;

    for(int i=0; i < 7; i++){
        qnt = valor / notas[i];
        valor = valor%notas[i];
        cout << qnt << " nota(s) de" << " R$ " << notas[i] <<",00" << endl;
    }
    return 0;
}
