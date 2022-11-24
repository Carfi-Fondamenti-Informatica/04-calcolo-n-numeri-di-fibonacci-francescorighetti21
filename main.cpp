#include <iostream>
using namespace std;

int main() {
 int numero=0; a=1; b=1, c=0;
   cin >> numero;
   if(numero>=2){
      cout << a << endl << b << endl;
   for(int i=2; i<(numero);i++){
   c=a+b;
      a=b;
      b=c;
      cout << c << endl;
      }
      }else {
      cout << "errore" << endl;
      
}
   
   
   
   return 0;
}
