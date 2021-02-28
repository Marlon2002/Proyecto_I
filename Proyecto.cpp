#include <iostream>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//Menú de Inicio.
int menu(){
	cout<<"------Bienvenido al Menu------"<<endl;
	cout<<"Eliga una de las siguientes opciones: "<<endl;
	cout<<"1. Operaciones Basicas."<<endl;
	cout<<"2. Numero Par o Impar."<<endl;
	cout<<"3. Conversion de Unidades."<<endl;
	cout<<"4. Ver si la palabra es palindromo."<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos."<<endl;
	cout<<"6. Conversion de numeros enteros a letras."<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras."<<endl;
	cout<<"8. Tabla de Multiplicar."<<endl;
	cout<<"9. Todas las tablas de multiplicar."<<endl;
	cout<<"10. Multiplicacion en modo grafico."<<endl;
	cout<<"11. Sistema decimal a binario."<<endl;
	cout<<"12. Sistema decimal a hexadecimal"<<endl;
	cout<<"13. Creacion Figuras Geometricas."<<endl;
	cout<<"14. Mover un punto en toda la pantalla.";
	cout<<"15. Simulacion de un cajero."<<endl;
	cout<<"16. Calcular hipotenusa."<<endl;
	cout<<"17. Calcular Edad."<<endl;
	cout<<"18. Sacar promedio de 3 notas"<<endl;
	cout<<"19. Contar palabras."<<endl;
	cout<<"20. Saber su es numero primo o no."<<endl;
}
	
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci );
	
}


void texto_c(){
	cout<<"Ingrese una opcion: "<<endl;
	cout<<"1. De kilometros a millas."<<endl;
	cout<<"2. De millas a kilometros ."<<endl;
	cout<<"3. De metros a pulgadas. "<<endl;
	cout<<"4. De pulgadas a metros . "<<endl;
	cout<<"5. De libra a kilos."<<endl;
	cout<<"6. De kilos a libra."<<endl;
	
}
//Programa I, Operaciones Básicas.
int Suma(){
	
	cout<<"Seleccione la operacion: "<<endl;
	cout<<"1. Suma."<<endl; cout<<"2. Resta."<<endl; 
	cout<<"3. Multiplicacion."<<endl; cout<<"4. Division."<<endl;
	
}

void Operacion(){
	Suma();
	float a, b, s, r, m, d;
	int o;
	cin>>o;

	while(o != 9){
			switch(o){
				case 1 :{
					system("cls");
					cout<<"Digite primer valor: "<<endl;
					cin>>a;
					cout<<"Digite segundo valor: "<<endl;
					cin>>b;
					s = a + b;
					cout<<"La suma es: "<<s<<endl;
					system("pause");
					system("cls");
					Suma();
					cin>>o;
					break;
				}
				case 2 : {
					system("cls");
					cout<<"Digite primer valor: "<<endl;
					cin>>a;
					cout<<"Digite segundo valor: "<<endl;
					cin>>b;
					r = a - b;
					cout<<"La resta es: "<<r<<endl;
					system("pause");
					system("cls");
					Suma();
					cin>>o;
					break;
				}
				case 3 : {
					system("cls");
					cout<<"Digite primer valor: "<<endl;
					cin>>a;
					cout<<"Digite segundo valor: "<<endl;
					cin>>b;
					m = a * b;
					cout<<"la multiplicacion es :"<<m<<endl;
					system("pause");
					system("cls");
					Suma();
					cin>>o;
					break;
				}
				case 4 : {
					system("cls");
					cout<<"Digite primer valor: "<<endl;
					cin>>a;
					cout<<"Digite segundo valor: "<<endl;
					cin>>b;
					d = a / b;
					cout<<"la division es: "<<d<<endl;
					system("pause");
					system("cls");
					Suma();
					cin>>o;
					
					break;
				}
				default :
				if(o < 1 || o >= 5){
					system("cls");
					cout<<endl<<"Valor Invalido"<<endl;
					system("pause");
					system("cls");
					Suma();
					cin>>o;

				}
				break;
		}
	
	}
}
	
//Programa II, Número Par o Impar.
void Par(){
	int n;
	cout<<"Digite numero: "<<endl;
	cin>>n;
	if (n ==0){
		cout<<"El numero es cero"<<endl;
		system("pause");
		system("cls");
	}
	else if(n%2== 0){
		cout<<"El numero es par"<<endl;
		system("pause");
		system("cls");
	}
	else{
		cout<<"El numero es impar"<<endl;
		system("pause");
		system("cls");
	}
}

//Programa III, Conversión de Unidades.

void Conversion(){
	float n, r;
	texto_c();
	int o;
	cin>>o;
	while(o != 9){
		switch(o){
			case 1:{
				system("cls");
				float c = 0.62;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" Mi."<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
			case 2: {
				system("cls");
				float c = 1.60;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" Km."<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
			case 3: {
				system("cls");
				float c = 39.37;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" pulg."<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
			case 4: {
				system("cls");
				float c = 0.0254;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" Mt"<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
			case 5: {
				system("cls");
				float c = 0.45;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" Kg."<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
			case 6: {
				system("cls");
				float c = 2.20;
				cout<<"Ingrese valor a convertir: "<<endl;
				cin>>n;
				r = n * c;
				cout<<"El resultado es: "<<r<<" Lb."<<endl;
				system("pause");
				system("cls");
				texto_c();
				cin>>o;
				break;
			}
				default :
				if(o < 1 || o > 7){
					system("cls");
					cout<<endl<<"Valor Invalido"<<endl;
					system("pause");
					system("cls");
					texto_c();
					cin>>o;

				}
		}
	}
}

//IV Programa Palíndromo

void Palindromo(){
	string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo." << endl;
    } else {
        cout << "La palabra ingresada no es palindromo." << endl;
    }
    
	
}
// V Programa, Conversión de números arábigos a romanos.
void Romanos(){
	 int numero, unidades, decenas, centenas, millares; 
 	cout<< "Ingrese un numero: "<<endl;
 	cin>> numero;


 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }
}

//VI Conversion de números a letras:
void Con_NL(){
	int x;
    cout<<"Ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        	if(x>=900)   {cout<<" Novecientos " ;x=x-900;}
       else if(x>=800)   {cout<<" Ochocientos " ;x=x-800;}
       else if(x>=700)   {cout<<" Setecientos " ;x=x-700;}
       else if(x>=600)   {cout<<" Seiscientos " ;x=x-600;}
       else if(x>=500)   {cout<<" Quinientos "  ;x=x-500;}
       else if(x>=400)   {cout<<" Cuatrocientos "   ;x=x-400;}
       else if(x>=300)   {cout<<" Trescientos " ;x=x-300;}
       else if(x>=200)   {cout<<" Docientos "  ;x=x-200;}
       else if(x>100)    {cout<<" Ciento "  ;x=x-100;}
       else if(x==100)  {cout<<" Cien"     ;x=x-100;}
        if(x>90) {cout<<" Noventa y "   ;x=x-90; }
            if(x==90)   {cout<<" Noventa"  ;x=x-90; }  
            if(x>80) {cout<<" Ochenta y "   ;x=x-80; }
            if(x==80)   {cout<<" Ochenta"  ;x=x-80; }
            if(x>70) {cout<<" Setenta y "   ;x=x-70; }
            if(x==70)   {cout<<" Setenta"  ;x=x-70; }
            if(x>60) {cout<<" Sesenta y "   ;x=x-60; }
            if(x==60)   {cout<<" Sesenta"  ;x=x-60; }
            if(x>50) {cout<<" Cincuenta y " ;x=x-50; }
            if(x==50)   {cout<<" Cincuenta"    ;x=x-50; }
            if(x>40) {cout<<" Cuarenta y "  ;x=x-40; }
            if(x==40)   {cout<<" Cuarenta" ;x=x-40; }
            if(x>30) {cout<<" Treinta y "   ;x=x-30; }
            if(x==30)   {cout<<" Treinta"  ;x=x-30; }
            if(x>20) {cout<<" Veinti"       ;x=x-20; }
            if(x==20)   {cout<<" Veinte"       ;x=x-20; }
        if(x>=16)    {cout<<" Dieci"        ;x=x-10; }
       else if(x==15)   {cout<<" Quince"       ;x=x-15; }
       else if(x==14)   {cout<<" Catorce"  ;x=x-14; }
       else if(x==13)   {cout<<" Trece"        ;x=x-13; } 
       else if(x==12)   {cout<<" Doce"     ;x=x-12; }
       else if(x==11)   {cout<<" Once"     ;x=x-11; }
       else if(x==10)   {cout<<" Diez"     ;x=x-10; }      
        if(x==9)    {cout<<" Nueve"        ;x=x-9;  }
        if(x==8)    {cout<<" Ocho"     ;x=x-8;  }
        if(x==7)    {cout<<" Siete"        ;x=x-7;  }
            if(x==6)    {cout<<" Seis"     ;x=x-6;  }
       else if(x==5)    {cout<<" Cinco"        ;x=x-5;  }
       else if(x==4)    {cout<<" Cuatro"       ;x=x-4;  }
       else if(x==3)    {cout<<" Tres"     ;x=x-3;  }
       else if(x==2)    {cout<<" Dos"      ;x=x-2;  }
       else if(x==1)    {cout<<" Uno"      ;x=x-1;  }
       }
    cout<<endl;
	cin.ignore();
}


//Programa VII Conversion de Numero decimal a letra.
void Con_ND(){
		int x;
    cout<<"Ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        	if(x>=900)   {cout<<" Novecientos " ;x=x-900;}
       else if(x>=800)   {cout<<" Ochocientos " ;x=x-800;}
       else if(x>=700)   {cout<<" Setecientos " ;x=x-700;}
       else if(x>=600)   {cout<<" Seiscientos " ;x=x-600;}
       else if(x>=500)   {cout<<" Quinientos "  ;x=x-500;}
       else if(x>=400)   {cout<<" Cuatrocientos "   ;x=x-400;}
       else if(x>=300)   {cout<<" Trescientos " ;x=x-300;}
       else if(x>=200)   {cout<<" Docientos "  ;x=x-200;}
       else if(x>100)    {cout<<" Ciento "  ;x=x-100;}
       else if(x==100)  {cout<<" Cien"     ;x=x-100;}
        if(x>90) {cout<<" Noventa y "   ;x=x-90; }
            if(x==90)   {cout<<" Noventa"  ;x=x-90; }  
            if(x>80) {cout<<" Ochenta y "   ;x=x-80; }
            if(x==80)   {cout<<" Ochenta"  ;x=x-80; }
            if(x>70) {cout<<" Setenta y "   ;x=x-70; }
            if(x==70)   {cout<<" Setenta"  ;x=x-70; }
            if(x>60) {cout<<" Sesenta y "   ;x=x-60; }
            if(x==60)   {cout<<" Sesenta"  ;x=x-60; }
            if(x>50) {cout<<" Cincuenta y " ;x=x-50; }
            if(x==50)   {cout<<" Cincuenta"    ;x=x-50; }
            if(x>40) {cout<<" Cuarenta y "  ;x=x-40; }
            if(x==40)   {cout<<" Cuarenta" ;x=x-40; }
            if(x>30) {cout<<" Treinta y "   ;x=x-30; }
            if(x==30)   {cout<<" Treinta"  ;x=x-30; }
            if(x>20) {cout<<" Veinti"       ;x=x-20; }
            if(x==20)   {cout<<" Veinte"       ;x=x-20; }
        if(x>=16)    {cout<<" Dieci"        ;x=x-10; }
       else if(x==15)   {cout<<" Quince"       ;x=x-15; }
       else if(x==14)   {cout<<" Catorce"  ;x=x-14; }
       else if(x==13)   {cout<<" Trece"        ;x=x-13; } 
       else if(x==12)   {cout<<" Doce"     ;x=x-12; }
       else if(x==11)   {cout<<" Once"     ;x=x-11; }
       else if(x==10)   {cout<<" Diez"     ;x=x-10; }      
        if(x==9)    {cout<<" Nueve"        ;x=x-9;  }
        if(x==8)    {cout<<" Ocho"     ;x=x-8;  }
        if(x==7)    {cout<<" Siete"        ;x=x-7;  }
            if(x==6)    {cout<<" Seis"     ;x=x-6;  }
       else if(x==5)    {cout<<" Cinco"        ;x=x-5;  }
       else if(x==4)    {cout<<" Cuatro"       ;x=x-4;  }
       else if(x==3)    {cout<<" Tres"     ;x=x-3;  }
       else if(x==2)    {cout<<" Dos"      ;x=x-2;  }
       else if(x==1)    {cout<<" Uno"      ;x=x-1;  }
       }
    cout<<endl;
	cin.ignore();
}
// VIII, Programa Tabla de Multiplicar.

void Multi_S(){
	int n= 3;
	cout<<"Tabla de multiplicar de 3 :"<<endl;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * n;
        cout<<n <<" x "<< i <<"="<< multiplicacion <<endl;
    }
}

// IX Programa, Todas las tablas de Multiplicar.

void TM(){
	int n;
	cout<<"Ingrese un numero :"<<endl;
    cin>> n;
    for(int i=1;i<=10;i++){
        int multiplicacion = i * n;
        cout<<n <<" x "<< i <<"="<< multiplicacion <<endl;
    }
}


// Programa X Multiplicacion con Grafica.

void MG(){
int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,2);cout<<("Multiplicacion de Dos Digitos En modo Grafico");

gotoxy(20,6);cout<<("Ingrese Cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese Cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
gotoxy(19,18);cout<<r<<endl;
gotoxy(19,19);cout<<" ";
}

//Programa XI Decimales a binario

void Binario(){	
	int D,D1,D2,D3,D4,D5,D6,D7,D8,R1,R2,R3,R4,R5,R6,R7,R8;
    cout<<"Ingrese un numero decimal"<<endl;
    cin>>D;
    if ((D>255)||(D<0))
        cout<<"Ingrese un numero del 0 al 225"<<endl;else
    {
    D1= D/2;R1=D%2;
    D2=D1/2;R2=D1%2;
    D3=D2/2;R3=D2%2;
    D4=D3/2;R4=D3%2;
    D5=D4/2;R5=D4%2;
    D6=D5/2;R6=D5%2;
    D7=D6/2;R7=D6%2;
    D8=D7/2;R8=D7%2;
 
    cout<<R8<<R7<<R6<<R5<<R4<<R3<<R2<<R1<<endl;}
     
cin.ignore ();
}
	
	
//Programa XII, Sistema decimal a hexadecimal.

void Hexa(){
	int dig[20];
	int n, residuo, resultado, i = 0;
	cout<<"Ingrese decimal"<<endl;
	cin>>n;
	residuo = n%16;
	resultado = n/16;
	do{
		residuo = n%16;
		resultado = n/ 16;
		dig[i] = residuo;
		n = resultado;
		i++;
		
	} while(resultado > 15);
	
	dig[i] = resultado;
	cout<<"Equivale a: ";
	
	for(int j = i; j >= 0; j--){
		if (dig[j] ==10){
			cout<<"A";
		}
		else if(dig[j] == 11){
			cout<<"B";
		}
		else if(dig[j] == 12){
			cout<<"C";
		}
		else if(dig[j] == 13){
			cout<<"D";
		}
		else if(dig[j] == 14){
			cout<<"E";
		}
		else if(dig[j] == 15){
			cout<<"F";
		}
		else{
		cout<< dig[j];
		}
	}	
}

//Programa XIII, Creacion Figuras geométricas.

void Figura(){
	int o;
	cout<<"Ingrese opcion: "<<endl;
	cout<<"1. Cuadrado."<<endl;
	cout<<"2. Circulo."<<endl;
	cout<<"3. Salir"<<endl;
	cin>>o;
	system("cls");
	do{
		switch(o){
			case 1:{
					int l;
					cout<<"Ingrese lado: "<<endl;
					cin>>l;
					
					
				for(int i = 0; i<l ; i++){
				
					for(int j = 0; j<l; j++){
					cout<<"*";
					
				}
					
					cout<<endl;
			}	break;
			}
			case 2:{
				int n = 0;
				
				cin>>n;
				for (int j = 0; j <= n *2; j++){
					for (int i = 0; i <= n* 2; i++){
						if (sqrt(pow(j-(n/2),2) + pow(i-(n/2),2))== n/2) {
							cout<<"*";
						}
						else{
							cout<<" ";
						}
					}cout<<endl;
				}
				break;
			}
		}
		
	}while(o != 4);
	
}
// Programa XIV, mover caracteres.



class NAVE{
	int x,y;
	public:
		NAVE (int _x, int _y):x(_x),y(_y){}//constructor
		void pintar ();
		void borrar ();
		void mover ();
};


void NAVE::pintar(){
	gotoxy(x,y); printf ("****");
	gotoxy(x,y+1); printf ("****");
	gotoxy(x,y+2); printf ("****");
}

void NAVE::borrar(){
	gotoxy(x,y); printf ("      ");
	gotoxy(x,y+1); printf ("     ");
	gotoxy(x,y+2); printf ("     ");
}

void NAVE::mover(){
char tecla = getch();
	borrar();
	if (tecla == 'a' && x> 3) x--;
	if (tecla == 'd' && x+3 < 74) x++;
	if (tecla == 'w' && y > 4 ) y--;
	if (tecla == 's' && y+3 < 33) y++;
	pintar();
}



//Programa XV Cajero Automatico.

void Cajero_L(){
	system("cls");
	cout<<"Bienvenido al cajero: "<<endl;
	cout<<"Ingrese una de estas opciones. "<<endl;
	cout<<"1. Ingresar saldo."<<endl;
	cout<<"2. Retirar."<<endl;
	cout<<"3. Ver saldo de cuenta."<<endl;
	cout<<"4. Salir."<<endl;
}


void Cajero(){
	int saldo_C = 2000;
	int saldo, retiro, op,ag;
	Cajero_L();
	cin>>op;
	do{
		switch(op){
			case 1:{
				system("cls");
				cout<<"Ingrese cantidad a depositar: "<<endl;
				cin>>ag;
				saldo = saldo_C +ag;
				cout<<"Cantidad disponible es: "<<saldo<<endl;
				system("pause");
				Cajero_L();
				cin>>op;
				break;
			}
			case 2: {
				system("cls");
				cout<<"Ingrese saldo a retirar"<<endl;
				cin>>retiro;
				if(retiro >= saldo_C){
					system("cls");
					cout<<"Saldo no suficiente"<<endl;
					cin>>retiro;
				}
				saldo = saldo_C - retiro;
				cout<<"La cantidad disponible es: "<<saldo<<endl;
				system("pause");
				Cajero_L();
				cin>>op;
				break;
			}
			case 3: {
				system("cls");
				cout<<"Su saldo es: "<<saldo_C<<endl;
				system("pause");
				Cajero_L();
				cin>>op;
				break;
			}
			default :
				if(op < 1 || op > 4){
					system("cls");
					cout<<"Opcion Invalida, ingrese otra nuevamente."<<endl;
					cin>>op;
				
				}
			
			
		}
	}while(op != 4);
}
//Programa XVI: Calcular Hipotenusa.

void Hipotenusa(){
	float ca, co;
	system("cls");
	cout<<"Ingrese lado adyacente del triangulo"<<endl;
	cin>>ca;
	cout<<"Ingrese lado opuesto del triangulo"<<endl;
	cin>>co;
	cout<<sqrt(ca* ca + co* co)<<endl;
	system("pause");
	
	
}
//Programa XVII: Saber edad.

void Edad(){
	system("cls");
	int edad, fecha;
	int anio = 2021;
	
	cout<<"Ingrese la fecha de su nacimiento"<<endl;
	cin>>fecha;
	edad = anio - fecha;
	
	if(fecha >= anio){
		cout<<"Usted ni ha nacido!!"<<endl;
	}
	else if(fecha<= 1921){
		cout<<"Usted no esta vivo!!"<<endl;
	}
	else{
		cout<<"Su edad es: "<<edad<<endl;
	}
 
}

// Programa XVIII, Sacar Promedio.
void Promedio(){
	int m;
	float nota1,nota2,nota3, promedio, promedio2, p;
	cout<<"Ingrese una opcion:"<<endl;
	cout<<"1. Promedio de una nota."<<endl;
	cout<<"2. Promedio de dos notas."<<endl;
	cout<<"3. Promedio de tres notas."<<endl;
	cin>>m;
	do{
		switch(m){
			case 1:{
				system("cls");
				p = 1;
				cout<<"Ingrese el valor de la nota"<<endl;
				cin>>nota1;
				promedio = nota1   / p;
				cout<<"El promedio es: "<<promedio2<<endl;
				cout<<"1. Repetir."<<endl;
				cout<<"2. Promedio de 2 notas."<<endl;
				cout<<"3. Promedio de 3 notas."<<endl;
				cin>>m;
				system("cls");
				break;
			}
			case 2:{
				system("cls");
				p = 2;
				cout<<"Ingrese el valor de la nota 1: "<<endl;
				cin>>nota1;
				cout<<"Ingrese el valor de la nota 2: "<<endl;
				cin>>nota2;
				promedio = nota1 + nota2;
				promedio2 = promedio / p;
				cout<<"El promedio es: "<<promedio2<<endl;
				cout<<"1. Promedio de 1 nota"<<endl;
				cout<<"2. Repetir"<<endl;
				cout<<"3. Promedio de 3 notas"<<endl;
				cin>>m;
				system("cls");
				break;
			
			}
			case 3:{
				system("cls");
				p = 3;
				cout<<"Ingrese el valor de la nota 1: "<<endl;
				cin>>nota1;
				cout<<"Ingrese el valor de la nota 2:"<<endl;
				cin>>nota2;
				cout<<"Ingrese el valor de la nota 3: "<<endl;
				cin>>nota3;
				promedio = nota1 + nota2 + nota3 / p;
				promedio2 = promedio / p;
				cout<<"El promedio es: "<<promedio2<<endl;
				cout<<"1. Repetir"<<endl;
				cout<<"2. Promedio de 2 notas"<<endl;
				cout<<"3. Promedio de 3 notas"<<endl;
				cin>>m;
				system("cls");
				break;
			}
		}
	}while(m != 4);
	
	
}
//Programa XIX, Contar Palabras.
int Contar_P(char[]);

int Contar_P(char cad[]){

	int palabra = 0;
	for (int i= 1; cad[i]!='\0'; i++){
			if(cad[i-1] ==' ' &&isalpha(cad[i]))
				++palabra;
		}
			 if(isalpha(cad[0])){
				++palabra;
				return palabra;
			
	}
}

//Programa XX, Saber número primo.

void Primo(){
	int numero, divs=0, i; 
   cout << "Programa para determinar si un numero es primo" << endl;
   cout<< "Ingrese el numero: ";
   cin >> numero;
   
   numero = abs(numero); 
   
   for(i=1;i<(numero+1);i++)
   {  
      if(numero%i==0)
      {  
         divs++;                 
      }  
   }  
   
   if(divs!=2)   
   {  
      cout<<"No es un numero primo"<<endl;
   }
   else
   {  
      cout<<"Es un numero primo"<<endl;
   }
    
	
}

//Menú Principal unión de todos los programas.
int main(){
	system("cls");
	menu();
	int o;
	cin >>o;
	while(o != 21){
		switch(o){
			case 1: {
				system("cls");
				Operacion();
				break;
			}
			case 2: {
				system("cls");
				Par();
				main();
				break;
			}
			case 3: {
				system("cls");
				Conversion();
				break;
			}
			case 4:{
				system("cls");
				Palindromo();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 5:{
				system ("cls");
				Romanos();
				system("pause");
				main();
				break;
			}
			case 6: {
				system("cls");
				Con_NL();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 7: {
				system("cls");
				Con_ND();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 8:{
				system("cls");
				Multi_S();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 9: {
				system("cls");
				TM();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 10:{
				system("cls");
				MG();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 11:{
				system("cls");
				Binario();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 12:{
				system("cls");
				Hexa();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 13:{
				system("cls");
				Figura();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 14:{
				system("cls");
				OcultarCursor();
				NAVE N(7,7);
				bool game_over = false;
				while (!game_over){
					N.mover();
					Sleep(30);
					}
				}
			case 15: {
				Cajero();
				system("cls");
				main();
				break;
			}
			case 16: {
				system("cls");
				Hipotenusa();
				main();
				break;
			}
			case 17: {
				
				Edad();
				system("pause");
				system("cls");
				main();
				break;
			}
			case 18 : {
				system("cls");
				system("pause");
				Promedio();
				main();
				break;
			}
			case 19 : {
				system("cls");
				
				char cadena[250];
				cout<<"Ingrese una cadena a contar"<<endl;
				cin.getline(cadena,250);
				cout<<"La cadena de texto ingresada es "<<Contar_P(cadena)<<" palabras."<<endl;
				system("pause");
				break;
			}
			case 20: {
				system("cls");
				Primo();
				system("pause");
				main();
				break;
			}
				
			}
				
		}
	system("cls");
	return 0;
}


