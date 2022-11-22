#include <iostream>
using namespace std;

int main() {
    int primonumero=0, secondonumero=1, n=0;
    cin >> n;
    int c=0;
    int i=2;
    if (n>=2){
        cout << primonumero+secondonumero << endl;
        while(i++ <= n){
            c=primonumero + secondonumero;
            cout << c << endl;
            primonumero = secondonumero;
            secondonumero = c;
        }
    }else{
        cout << "errore" << endl;
    }
   return 0;
}
