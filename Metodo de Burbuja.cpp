#include<iostream>//Libreria importada para utilizar la entrada y salida de datos
#include<conio.h>//Libreria importada para proveer un sistema de E/S por consola

using namespace std;//Util para usar las palabras reservadas cout y cin


int main(){//Función principal del programa

	setlocale(LC_CTYPE,"Spanish");//Paquete util para poder escribir libremente en el lenguaje español
	int op,n1,n2,n3,n4,n5,suma=0,rep;//Declaración de las variables
	int i,j,aux;

	cout<<"\tDame el primer numero:";//Salida de datos o impresíon por consola
    cin>>n1;//Entrada de datos
	cout<<"\tDame el segundo numero:";
	cin>>n2;
	cout<<"\tDame el tercer numero:"; 
	cin>>n3;
	cout<<"\tDame el cuarto numero:"; 
	cin>>n4;
    cout<<"\tDame el quinto numero:"; 
	cin>>n5;
   	
	system("cls");//Limpieza de pantalla
	
	do{
    	cout<<"\t¿Qué deseas realizar?:\n"<<endl;//Salida de datos o impresíon por consola
    	cout<<"\n\tRealizar suma, pulsa 1:\n";
    	cout<<"\n\tOrdenar de mayor a menor, pulsa 2:\n";
    	cout<<"\n\tMostrar el numero mayor, pulsa 3:\n";
    	cout<<"\t";
    	cin>>op;//La opción se almacena en la variable op
    	
    	int array[5] = {n1,n2,n3,n4,n5};//Creación de un array de cinco elementos
    //Sentencia switch
	switch(op){
		case 1://Casos de la sentencia
	 	    cout<<"\tSuma:";
	 	    suma= n1+n2+n3+n4+n5;//Los número ingresados se suman
	 	    cout<<"\n\tLa suma es:"<<suma;//Imprime el valor de la suma
	 	    getch();//La función getch retorna el carácter leído desde el teclado.
	 	    
		break;
		case 2:
			for(i=0;i<5;i++){//ciclo para controlar el número de pasos
				for(j=0;j<4;j++){//ciclo para controlar el número de comparaciones por pasada
				if(array[j] > array[j+1]){/*compara los elementos adyacentes y los intercambia 
											si el primer elemento es mayor que el segundo*/
					aux = array[j];//EL valor del array en el elemento j se almacena en aux
					array[j] = array[j+1];//El valor del array j+1 se almacena en el array en el elemento j
					array[j+1] = aux;//Se iguala el array[j+1] a aux
					}
				}	
			}
			cout<<"\n\tNúmeros ordenados de mayor a menor: ";
			for(i=4;i>=0;i--){//Recorre los elementos del array
				cout<<array[i]<<" ";//Imprime los valores del array en orden descendente
			}
			getch();			
		break;	
		case 3:
	     	for(i=0;i<5;i++){//ciclo para controlar el número de pasos
				for(j=0;j<4;j++){//ciclo para controlar el número de comparaciones por pasada
				if(array[j] > array[j+1]){/*compara los elementos adyacentes y los intercambia 
											si el primer elemento es mayor que el segundo*/
					aux = array[j];//EL valor del array en el elemento j se almacena en aux
					array[j] = array[j+1];//El valor del array j+1 se almacena en el array en el elemento j
					array[j+1] = aux;//Se iguala el array[j+1] a aux
					}
				}
			}
			cout<<"\n\tEl mayor es: "<<array[4];//Imprime el valor del último array, es decir el mayor
			getch();
		break;
     	default:{
     		system("cls");
			cout<<"\tIngrese una opción correcta:";
			getch();
		}
	}	
	system("cls");
	cout<<"\n\tDeseas regresar, presiona 2:"<<endl;
	cout<<"\n\tSalir, presiona 1:"<<endl;
	cout<<"\t";
	cin>>rep;
	system("pause");
	system("cls");
	}while(rep!=1);//Se ejecuta de nuevo las lineas anteriores en caso de que el usuario no seleccione una de esas opciones
	cout << "\t\t\tSALIDO"; exit(1);
	return 0;//Retorno de la función main
	
}//Fin de la Función principal del programa
