#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int LIMIT = 20;
    int x, a, b, c, p, k, s, wiek, waga, i, w=1;

    cout << " Wybierz zadanie od 1 do 7"                                        << endl;

    cout << "1- Liczba podzielna przez 3"                                       << endl;
    cout << "2- Liczba trzycyfrowa podzielna przez 17"                          << endl;
    cout << "3- Czy u¿ytkownik jest pelnoletni"                                 << endl;
    cout << "4- Czy ciarowka moze wjechac na most"                              << endl;
    cout << "5- Czy trzecia z podanych liczb miesci sie miezy pierwsza a druga" << endl;
    cout << "6- Czy liczba pierwsza p spelnia Male Twierdzenie Fermata"         << endl;
    cout << "7- Czy zabka pokona dany dystans w trzech skokach"                 << endl;



{

    cin >> x;
    switch (x)

{

    case 1: cin >> a;
    if (a%3==0)  cout << "TAK" ;
    else cout << "NIE"  << endl;                                            break;


    case 2: cin >> a;
    if (a>99 && a<=999 && a%17==0 ) cout << "TAK" ;
    else cout << "NIE"  << endl;                                            break;


    case 3: cin >> wiek;
    if (wiek>=18) cout << "TAK" ;
    else cout << "NIE" << endl;                                             break;


    case 4: cin >> waga;
    if (waga<=LIMIT) cout << "TAK" ;
    else cout << "NIE" << endl;                                             break;


    case 5: cin >> a >> b >> c;
    if ((c>a) && (c<b) || (c>b) && (c<a) ) cout << "TAK";
    else cout << "NIE" << endl;                                             break;


    case 6:
    cout << "\n" <<"Wpisz liczby pierwsze za p (np. 1,3,5,7)\n";
    cin >> a >> p;
    int w=1;

     cout << "teraz nastapi potegowanie a\n";
     for (int i=1; i<=p; i++)
    {w= w *a;
    cout << w << endl;
    }
    cout <<"dla kazdego spotegowanego a odejmujemy a\nsprawdzamy czy jest podzielna przez p\nodp brzmi:  ";
    if ((w-a)%p==0) cout <<"TAK";
        else cout << "NIE";                                                break;


    case 7: cin >> p >> k >> s;
    if ((k-p)<=3*s) cout<<"TAK";
    else  cout << "NIE" << endl;                                           break;







}
}
    return 0;
}
