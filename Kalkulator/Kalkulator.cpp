#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()

 {
for (;;)
{   int x,a,b;



    cout << "Kalkulator\nMENU\n" << endl;

    cout << "1- suma liczb" << endl;
    cout << "2- odejmowanie liczb"<< endl;
    cout << "3- mnozenie " << endl;
    cout << "4- dzielenie" << endl;
    cout << "5- potega" << endl;
    cout << "6- pierwiastek"<< endl;
    cout << "7- VAT" << endl;
    cout << "8- WYJSCIE"<<endl;
    {
        cin >> x;
    switch (x)
        {



          case 1: cin >> a >> b;
            cout << a+b<<endl; break;

          case 2: cin >> a >> b;
            cout << a-b<< endl; break;

          case 3: cin >>a>> b;
            cout << a*b<< endl; break;

          case 4: cin >>a>>b;
         if (b==0) cout <<"Nie dzielimy przez zero";
           else cout << a/b << endl; break;

          case 5: cin >>a;
            cout << a*a << endl; break;

          case 6: cin >> a;
            cout <<  sqrt(a) << endl; break;

          case 7: cin >> a;
            cout << a/1.23 << endl;break;
      
          case 8: exit ();
          break;
          
           
          default :cout << "Nie ma takiej opcji w menu";













} getchar();getchar();
     system ("cls");

}
}

    return 0;
}
