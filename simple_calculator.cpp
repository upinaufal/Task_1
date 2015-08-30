#include <iostream>
using namespace std;

int main ()
{
    float a1,a2, hasil;
    char operasi;
    
    cin >> op1 >> operasi >> op2;
    
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
    
    cout << result << endl;
    return 0;
}
