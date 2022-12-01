// Creado por Dayana Garcia

/* pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
# incluir < iostream >

/* sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
utilizando el espacio de  nombres  estándar ;

/* sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa */
int  principal ()

{

/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable */
	flotante   GOBD_aa,GOBD_ma,GOBD_da,GOBD_an,GOBD_mn,GOBD_dn,GOBD_a,GOBD_m,GOBD_d;

/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_aa: */
	cout<< " Ingrese la fecha actual: " ;


/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_an */
	cin>>GOBD_aa>>GOBD_ma>>GOBD_da;



/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GOBD_an: */
	cout<< " Ingrese la fecha de nacimiento: " ;


/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos GOBD_an */
	cin>>GOBD_an>>GOBD_mn>>GOBD_dn;


/* Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples */
	si (GOBD_da>GOBD_dn){


// decimos que la GOBD_d va hacer igual a GOBD_da menos GOBD_dn, para poder calcular la edad de cualquier persona
		GOBD_d=GOBD_da-GOBD_d+ 30 ;
/* Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición. */
	}   más {


// decimos que la GOBD_d va a hacer igual a GOBD_da menos GOBD_dn, para poder calcular la edad de cualquier persona
		GOBD_da=GOBD_da+ 30 ;


// decimos que la GOBD_d va a hacer igual a GOBD_da menos GOBD_dn, para poder calcular la edad de cualquier persona
		GOBD_ma=GOBD_ma- 1 ;


// decimos que la GOBD_d va hacer igual a GOBD_da menos GOBD_dn, para poder calcular la edad de cualquier persona
		GOBD_d=GOBD_da-GOBD_dn;



	}



/* Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples */
	si (GOBD_ma>GOBD_mn){


// decimos que la GOBD_m va a hacer igual a GOBD_ma menos GOBD_mn, para poder calcular la edad de cualquier persona
		GOBD_m=GOBD_ma-GOBD_mn;


/* Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición. */
	} más {GOBD_ma=GOBD_ma+ 12 ;


// decimos que la GOBD_aa va a hacer igual a GOBD_aa, menos 1 para poder calcular la edad de cualquier persona
		GOBD_aa=GOBD_aa- 1 ;


// decimos que la GOBD_m va a hacer igual a GOBD_ma menos GOBD_mn, para poder calcular la edad de cualquier persona
		GOBD_m=GOBD_ma-GOBD_mn;
	
	}

// decimos que la GOBD_a va hacer igual a GOBD_aa menos GOBD_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	GOBD_a=GOBD_aa-GOBD_an;


/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comilas: */
	cout<< " Usted tiene " <<GOBD_a<< " años, " <<GOBD_m<< " meses, " <<GOBD_d<< " dias " <<endl;


/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
	devolver  0 ;

}
