#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,i,n,p;

    cout <<"Karta Pracy nr.3\t\n"<<endl;

    cout <<"Wybierz zadanie od 1-6:\n";

    cout << "1- Ciag szescianow liczb naturalnych powiekszonych o 3" << endl;
    cout << "2- Wszystkie liczby trzycyfrowe podzielne przez 15"     << endl;
    cout << "3- wszystkie dzielniki podanej liczby n"                << endl;
    cout << "4- suma liczb dwucyfrowych "                            << endl;
    cout << "5- Jaka liczbr wybral Bajtus?"                          << endl;
    cout << "6- ciag Fibonacciego"                                   << endl;

{                          cin >> x;
                          switch (x)
{


       case 1:
           for(int i=1; i<10; i++)
          cout <<(i*i*i)+3  << " ";
break;


       case 2:
        for (i=100; i<1000; i++)
         if (i%15==0) cout<<i<<" ";
break;

       case 3:
       cin >> n;

       cout << "\ndzielniki liczby n:\n" << endl;
       for (int p=1; p<1000; p++)
       if (n%p==0) cout <<  p<<" ";

break;

       case 4:
       int a,b,suma;
    cin >> a>>b;
    for (int i=10; i<100; i++)
suma = a+b;
        cout << suma << endl;
break;

       case 5:
                                  
        x
break;            
            
      case 6:                           
        int i,a=0,b=1;
    for (i=0; i<10; i++)
    {
        b=a+b;
        a=b-a;
        cout << b << " " << endl;
    }
break;                            
                                  
}


 }   return 0;
}
