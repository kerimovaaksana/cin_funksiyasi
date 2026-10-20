#include <iostream>
#include <string>
using namespace std;

int main (){
    system("cls");
    string fullname;
    string ata;
    int yas;
   // int a;
   // cin >> a;

   // cout << "a = " << a << endl;
   // cout << "kod bitdi" << endl;
   int age;
   cin >> age;

   // cout << "sizin yasiniz gelen il " << age + 1 << "olacaq." << endl
   // cout << "novbeti setir" << endl;
   // cout << "sonuncu setir"

   
   // cin >> fullname;
   cout <<"Ad ve soyadinizi daxil edin: " ;
   getline(cin,fullname);

   cout <<"Yasinizi daxil edin: ";
   getline(cin, ata);

   cout <<"Ata adinizi daxil edin: ";
   cin >> yas;

   cout << "Ad Soyad = " << fullname << "Ata adi = " << ata << "Yasiniz = " << yas << endl;
   cout << "Gelen il yasiniz " << yas + 1 << "olacaq" << endl;

   cout << fullname << endl;




 
   return 0;
}

    