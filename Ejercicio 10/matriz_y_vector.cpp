
//Declaracion de librerias
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//Declaracion de variables, matrices y vector
	int op=0, sumaD1=0, sumaD2=0, sumaF3=0;
	int alfa [3][3], total[3];
	
	do{ system("color B0"); //Color de pantalla
	
                        //Visualizar menu principal
		cout<<"\n *******************************************************";
		cout<<"\n *                    MENU PRINCIPAL                   *";
		cout<<"\n *******************************************************";
		cout<<"\n * 1. Ingreso de datos a la matriz Alfa                *";
		cout<<"\n * 2. Calculo de la suma de la diagonal 1 y 2 y fila 3 *";
		cout<<"\n * 3. Visualizar calculos                              *";
		cout<<"\n * 4. Finalizar programa                               *";
		cout<<"\n *******************************************************";
		cout<<"\n \n Ingrese la opcion que desea realizar: "; cin>>op; //Leer opcion del usuario
		
		if (op<1 || op>4){ system("color 40"); //Color de pantalla
		cout<<"\n ***************************************";
		cout<<"\n * EL NUMERO QUE INGRESO ES INCORRECTO *"; //mensaje de error
		cout<<"\n ***************************************";
		_getch(); } //fin de if de error.
		
		switch(op){
			
			case 1:{ system("cls"); //Limpiar pantalla
			cout<<"\n * INGRESOS DE DATOS DE LA MATRIZ ALFA *"<<endl; //Titulo
			
			//Contola las filas
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){ //Controla las columnas
			    
			    cout<<"\n Ingrese los numeros: ";
			    cin>> alfa [i][j]; //Se aguardan los datos en la mmatriz
		     }
			}
			_getch();	break;} //fin de case 1
			
			
			case 2:{ system("cls"); //Limpiar pantalla
			
			cout<<"\n *********************************************";
			cout<<"\n * Calculos realizados, para observar vuelva *";//mensaje a usuario
			cout<<"\n * menu y eliga la opcion visualizar         *";
			cout<<"\n *********************************************";
				
			//Para sumar la diagonal uno
			for(int i=0; i<3; i++){
				//suma
				 sumaD1 = sumaD1 + alfa[i][i]; } //fin de for
				 
				
			//Para sumar la diagonal dos
			for(int i=0; i<3; i++){ //fila
				for(int j=0; j<3; j++){ //columna
					if(i+j==2){
					sumaD2 = sumaD2 + alfa [i][j];		
		  } //fin de if
		 }//fin de for j
		}//fin de i
								
		sumaF3 = alfa[2][0] + alfa[2][1] + alfa[2][2];	//suma de fila tres	
				
			_getch();	break; } //fin de case 2
			
			
			case 3:{ system("cls"); //Limpiar pantalla
			
			cout<<"\n * VISUALIZACION *"<<endl;
			cout<<"\n Matriz Alfa"<<endl<<endl;
			
			//Visualizar Matriz
			for(int i=0; i<3; i++){ //fila
				for(int j=0; j<3; j++){//columna
					
					cout<<"  "<< alfa [i][j];
				}
				cout<<"\n"; //Salto de linea de la fila
			}
			
			
			//los 5 saltos de linea
			cout<<"\n"; cout<<"\n"; cout<<"\n"; cout<<"\n"; cout<<"\n";
			
			//Visualizar vector.
			cout<<" Vector Total \n "<<endl;
			total[0]=sumaD1;
			total[1]=sumaF3;
			total[2]=sumaD2;
			
			for(int i=0; i<3; i++){
				cout<<"  "<<total[i];
			}
			
			
			_getch();	break; }//fin de case 3
			
		}//fin de switch
		system("cls"); //limpiar pantalla y regresar a inico
			
	}//fn de do
	while(op !=4);
	
}//Fin del programa

