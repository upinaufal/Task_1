#include <iostream>
using namespace std;

int main ()
{
    float a1,a2, hasil;
    char operasi;
    
    cout << "Input angka yang akan dioperasikan (cth: 1+2): \n";
    cin >> a1 >> operasi >> a2;
    
    switch(operasi)
    {
        case '+':
          hasil = a1 + a2;
          break;
        
        case '-':
          hasil = a1 - a2;
          break;
          
        case '*':
          hasil = a1 * a2;
          break;
          
        case '/':
          hasil = a1 / a2;
          break;
        
        default:
          cout << "Operasi salah."; << endl;
          return -1;
    }
    
    cout << "Hasilnya adalah " << hasil << endl;
    return 0;
}
