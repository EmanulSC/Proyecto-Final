#include <iostream>//biblioteca de variables y comandos
#include <string>//biblioteca de variables y comandos
using namespace std;

int main()//inicializacion del programa
{

int i, tiempo[31],sumaluz=0, sumacamara=0; //declaración de variables
string salir, nombre[31], tipo[31], Luz="1", Camara="2";//declaración de variables tipo texto
double consumo[31]; //declaración de variable tipo numeros reales

cout<<"\nPrograma para introducir inventario de dispositivos(max=30)\n"<<endl; // muestra en pantalla el texto
while(salir!="2"){//ciclo de repeticion del programa
  i++;//suma 1 a la variable i
  cout<<"\nIngrese nombre del dispositivo\n";//muestra en pantalla el texto
  cin.ignore();//para ignorar el comando final que crea el bucle
  getline(cin,nombre[i]);//comando para dar lectura a todo el texto
  cout<<"\nIngrese el tipo de artículo\n        (1)-LUZ\n        (2)-CÁMARA"<<endl;//muestra en pantalla el texto
  cin>>tipo[i];//ingreso de información
  cout<<"\nIngrese el consumo en watts del artículo"<<endl;//muestra en pantalla el texto
  cin>>consumo[i];//ingreso de información
  cout<<"\nDesea continuar ingresando los dispositivos?\n        (1)-Para continuar\n        (2)-Para finalizar"<<endl;//muestra en pantalla el texto
  cin>>salir;//Comando para enciclar el while
}//fin del while

for(i=1;i<31;i++){//bucle para llenar el tiempo
if(nombre[i]!=""){//Condicion de entrada
cout<<"\nIngrese el tiempo de funcionamiento de " <<nombre[i]<<" horas\n";//muestra en pantalla el texto
cin>>tiempo[i];//solicitud del tiempo
}}//finalizar ciclo
for(i=1;i<31;i++){//bucle para realizar las operaciones 
if(tipo[i] == Luz){//condion para averiguar si es Luz
sumaluz= tiempo[i]*consumo[i] + sumaluz;}//operacion de potencia por el tiempo
if(tipo[i] == Camara){//Condicion para averiguar la Camara
sumacamara= tiempo[i]*consumo[i] + sumacamara;}//operacion
}//fin del bucle
cout<<"\n""El total consumido por Cámaras es: " <<sumacamara<<" Watts-hora\n"<<endl;//muestra en pantalla el texto y la totalidad
cout<<"El total consumido por Luz es: " <<sumaluz<<" Watts-hora\n"<<endl;//muestra en pantalla el texto y la totalidad
return 0;//regresa valores a 0
}//fin del programa

