/* Pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
	

	# incluir < iostream >
	

	/* Sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
	

	 utilizando el espacio de  nombres  estándar ;                                                                            
	 // creado por Dayana Garcia
	

	/* Sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa */
	

	int  principal ()
	

	  {
	

	/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable. las que utilizare son GOBD_x,GOBD_s=0.0 */
	flotante GOBD_x,GOBD_s= 0.0 ;
	

	/* El tipo int es el tipo entero basico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación en este tipo de ejercicio utilizaremos GOBD_i=0,GOBD_l */
	int GOBD_i= 0 ,GOBD_l;
	

	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_l: */
	cout<< " Ingrese el valor de GOBD_l: " ;        
	

	

	/* cin es el flujo de entrada estandar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_l */
	cin>>GOBD_l;         
	

	   
	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
	hacer {
	

	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_x: */
	cout<< " Ingrese el valor de GOBD_x: " ;
	

	

	/* cin es el flujo de entrada estandar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_l */
	cin>>GOBD_x;
	

	// hacemos el proceso de la sumatoria de nuestros contadores
	GOBD_i=GOBD_i+ 1 ;
	

	

	// sumamos nuestro acumulador
	GOBD_s=GOBD_s+GOBD_x;
	

	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
	} mientras (GOBD_i<GOBD_l);     
	

	// muestro resultados por pantalla
	cout<< " La suma de los números fue: " <<GOB_s<<endl;                                
	/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
	devolver  0 ;
	

	

	}
