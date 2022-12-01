// Creador por Dayana Garcia


	/* pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
	# incluir < iostream >


	/* sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
	utilizando el espacio de  nombres  estándar ;


	/* sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa */
	int  principal ()


	{


	/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable */
		flotante GOBD_x,GOBD_s= 0 ;


	/* El tipo int es el tipo entero basico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación */
		int GOBD_i= 0 ,GOBD_l;


	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_l: */
		cout<< " Ingrese cantidad de egrasos (1) : " ;


	/* cin es el flujo de entrada estandar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_l */
		cin>>GOBD_l;


	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_s: */
	        cout<< " Ingrese el saldo inicial (s) : " ;


	/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_s */
		cin>>GOBD_s;


	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		hacer {


	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *BDGO_x: */
			cout<< " Ingreso  (x) : " ;


	/* cin es el flujo de entrada estandar que normalmente es el teclado, donde indicar
	a lo que el usuario debe ingresar, en este caso ingresaremos GOBD_x */
			cin>>GOBD_x;


	// Hacemos el proceso de la sumatoria de nuestros contadores
			GOBD_i=GOBD_i+ 1 ;


	// Sumamos en el acumulador
			GOBD_s=GOBD_s+GOBD_x;


	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		} mientras (GOBD_i<GOBD_l);


	// Muestro resultados por pantalla
		cout<< " El saldo final es: " <<GOBD_s<<endl;


	/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
		devolver   0 ;


	}
