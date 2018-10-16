#include <iostream>
#include <cmath>
using namespace std;

int main()

 {

     int x,a,b;



    cout << "Kalkulator\n" << endl;

    cout << "1- suma liczb" << endl;
    cout << "2- odejmowanie liczb"<< endl;
    cout << "3- mnozenie " << endl;
    cout << "4- dzielenie" << endl;
    cout << "5- potega" << endl;
    cout << "6- pierwiastek"<< endl;
    cout << "7- VAT" << endl;

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
            cout << a/b << endl; break;

          case 5: cin >>a;
            cout << a*a << endl; break;

          case 6: cin >> a;
            cout <<  sqrt(a) << endl; break;

          case 7: cin >> a;
            cout << a/1.23 << endl;break;














}

}


    return 0;
}
