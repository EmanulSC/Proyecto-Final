#include <iostream>
#include <string>
using namespace std;

int main()
{

int i, tiempo[31],sumaluz=0, sumacamara=0;
string salir, nombre[31], tipo[31], Luz="1", Camara="2";
double consumo[31];

cout<<"\nPrograma para introducir inventario de dispositivos(max=30)\n"<<endl;
while(salir!="2"){
  i++;
  cout<<"\nIngrese nombre del dispositivo\n";
  cin.ignore();
  getline(cin,nombre[i]);
  cout<<"\nIngrese el tipo de artículo\n        (1)-LUZ\n        (2)-CÁMARA"<<endl;
  cin>>tipo[i];
  cout<<"\nIngrese el consumo en watts del artículo"<<endl;
  cin>>consumo[i];
  cout<<"\nDesea continuar ingresando los dispositivos?\n        (1)-Para continuar\n        (2)-Para finalizar"<<endl;
  cin>>salir;
}

for(i=1;i<31;i++){
if(nombre[i]!=""){
cout<<"\nIngrese el tiempo de funcionamiento de " <<nombre[i]<<" horas\n";
cin>>tiempo[i];
}}
for(i=1;i<31;i++){
if(tipo[i] == Luz){
sumaluz= tiempo[i]*consumo[i] + sumaluz;}
if(tipo[i] == Camara){
sumacamara= tiempo[i]*consumo[i] + sumacamara;}
}
cout<<"\n""El total consumido por Cámaras es: " <<sumacamara<<" Watts-hora\n"<<endl;
cout<<"El total consumido por Luz es: " <<sumaluz<<" Watts-hora\n"<<endl;
return 0;
}

