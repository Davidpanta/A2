// creado por Dayana Garcia
	

	

	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>
	

	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;
	

	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
	int main()
	

	{
	

	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
		float GOBD_x, GOBD_s= 0 , GOBD_s1= 0 , GOBD_s5= 0 ;
	

	

	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
		int GOBD_i= 0 ,GOBD_l,GOBD_i1= 0 ,GOBD_i5= 0 ;
	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_l:*/
	          cout<< " Ingreso l: " ;
	

	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GOBD_l */
		cin>>GOBD_l;
	

	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		do{
	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_x:*/
			cout<< " Ingreso x: " ;
	

	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GOBD_x */
			cin>>GOBD_x;
	

	

	//Hacemos el proceso de la sumatoria de nuestros contadores
			GOBD_i=GOBD_i+ 1 ;
	

	

	

	//Sumamos en el acumulador
			GOBD_s=GOBD_s+GOBD_x;
	

	

	/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
			if(GOBD_x== 1 ){
	

	

	//Volvemos hacer el proceso de la sumatoria de nuestros contadores
				GOBD_i1=GOBD_i1+ 1 ;
	

	//Sumamos en el acumulador
				GOBD_s1=GOBD_s1+GOBD_x;
	

	

	/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
			}else {
	

	//Hacemos nuevamente  el proceso de la sumatoria de nuestros contadores
				GOBD_i5=GOBD_i5+ 1 ;
	

	//Sumamos en el acumulador
	                       GOBD_s5=GOBD_s5+GOBD_x;
			}
	

	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		} while (GOBD_i<GOBD_l);
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_i:*/
		cout<< " La cantidad de monedas fue : " <<GOBD_i<<endl;
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_s:*/
		cout<< " El valor fue: " <<GOBD_s<<endl;
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_i1:*/
		cout<< " La cantidad de monedas s1 fue : " <<GOBD_i1<<endl;
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_s1:*/
		cout<< " El valor fue : " <<GOBD_s1<<endl;
	

	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_i5:*/
		cout<< " La cantidad de monedas i5 : " <<GOBD_i5<<endl;
	

	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_s5:*/
		cout<< " El valor fue : " <<GOBD_s5<<endl;
	

	

	

	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return 0;
	

	}
	

	

	

	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return 0;
	

	}
