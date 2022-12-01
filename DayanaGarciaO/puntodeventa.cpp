// creado por Dayana Garcia 
	

	/* pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
	# incluir < iostream >
	

	/* sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
	utilizando el espacio de  nombres  estándar ;
	

	/* Es la función principal y dentro de ella podemos escribir las operaciones */
	int  principal ()
	

	{
	

	/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable, en este caso utilizaremos las siguientesGOBD_x,GOBD_s=0,GOBD_vb,GOBD_piva=12,GOBD_viva,GOBD_pdesc=10,GOBD_vdesc,GOBD_vn */
	float GOBD_x,GODBD_s= 0 ,GOBD_vb,GOBD_piva= 12 ,GOBD_viva,GOBD_pdesc= 10 ,GOBD_vdesc,GOBD_vn;
	

	/* El tipo int es el tipo entero basico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando GOBD_i=0,GOBD_l */
	int GOBD_i= 0 ,GOBD_l;
	

	/* Cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l */
		cout<< " Ingreso l: " ;
	

	/* cin es el flujo de entrada estandar que normalmente es el teclado, que el usuario debera ingresar */
		cin>>GOBD_l;
	

	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		hacer {
	

	/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_x: */
			cout<< " Ingreso x: " ;
	

	/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicará lo que el usuario debe ingresar, en este caso ingresaremos GOBD_x */
	                cin>>GOBD_x;
	

	// Hacemos el proceso de la sumatoria de nuestros contadores
			GOBD_i=GOBD_i+ 1 ;
	

	// Sumamos en el acumulador
			GOBD_s=GOBD_s+GOBD_x;
	

	/* La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa */
		} mientras (GOBD_i<GOBD_l);
	

	// Luego hacemos, el proceso de GOBD_vb que va hacer igual a GOBD_s, en esta linea estamos igualando dos Cantidad
		GOBD_vb=GOBD_s;
	

	// Aqui vamos a sacar el % de JDPM_viva que va a hacer igual a JDPM_vb*JDPM_piva/100
		GOBD_viva=GOBD_vb*GOBD_piva/ 100 ;
	

	// procedemos a calcular el GOBD_vdesc que va a hacer igual a GOBD_vdesc=GOBD_vb*GOBD_pdesc/100, asi podemos sacar su %
		GOBD_vdesc=GOBD_vb*GOBD_pdesc/ 100 ;
	

	// decimos que GOBD_vn es igual a GOBD_vb+GOBD_viva-GOBD_vdesc, para poder calcular GOBD_vn
		GOBD_vn=GOBD_vb+ GOBD_viva-GOBD_vdesc;
	

	// Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicita.
		cout<< " El valor a pagar es de: " <<GOBD_vn<<endl;
	

	/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
		devolver  0 ;
		
	}
