// Creado por Dayana Garcia
	

	/* pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
	# incluir < iostream >
	

	/* sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
	utilizando el espacio de  nombres  estándar ;
	

	/* Es la función principal y dentro de ella podemos escribir las operaciones */
	int  principal ()
	

	{
	

	/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable */
		flotante GOBD_x,GOBD_pm;
	

	/* El tipo int es el tipo entero basico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación */
		int GOBD_i= 0 ,GOBD_l;
		cout<< " Ingreso l: " ;
		cin>>GOBD_l;
	

	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		hacer {
	

	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_x: */
			cout<< " Ingreso x: " ;
	

	/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicará lo que el usuario debe ingresar, en este caso ingresaremos GOBD_x */
			cin>>GOBD_x;
	

	// Hacemos el proceso de la sumatoria de nuestros contadores
			GOBD_i=GOBD_i+ 1 ;
	

	/* Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples */
			si (GOBD_x>GOBD_pm){
	

	// igualamos GOBD_pm a GOBD_x;
				GOBD_pm=GOBD_x;
			}
	

	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		} mientras (GOBD_i<GOBD_l);
	

	// Muestro resultados por pantalla
		cout<< " El promedio maximo del curso fue: " <<GOBD_pm<<endl<<endl;
	

	/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
		devolver  0 ;
	}
