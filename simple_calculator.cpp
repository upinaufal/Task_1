#include <iostream>
using namespace std;

int main ()
{
    float op1,op2, hasil;
    char operasi;
    
    cin >> op1 >> operasi >> op2;
    
    switch(operasi)
    {
        case '+':
          hasil = a + b;
          break;
        
        case '-':
          hasil = a - b;
          break;
          
        case '*':
          hasil = a * b;
          break;
          
        case '/':
          hasil = a / b;
          break;
        
        default:
          cout << "Operasi salah."; << endl;
          return -1;
    }
    
    cout << result << endl;
    return 0;
}
