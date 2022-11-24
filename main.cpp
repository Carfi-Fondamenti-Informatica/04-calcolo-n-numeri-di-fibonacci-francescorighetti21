#include <iostream>
using namespace std;

int main() {
   int n=0;
   int result=0;
   int precedente=1;
   int successivo=1;
   cin >> n;
   if(n<2){
      cout << "errore" << endl;
      return 0;
     }
   cout << precedente << endl << successivo << endl;
   for(int i=o; i<n;++i){
      result=precedente+successivo;
      precedente=successivo;
      successivo=result;
      cout << result << endl;
   }

   
   
   
   
   return 0;
}
