#include<stdio.h>
#include<string.h>
typedef struct
{
	int num_registro;
	char nickname[100];
	char email[100];
	char nombre[100];
	char apellido[100];
} Usuario;

typedef struct
{
	char tipo[100];
	char marca[100];
	char modelo[100];
	char carroceria[100];
	char motor[100];
} Vehiculo;
void menu_general(Usuario mis_usuarios[], Vehiculo mis_vehiculos[]);
void menu_usuarios(Usuario mis_usuarios[]);
void menu_vehiculo (Vehiculo mis_vehiculos[]);
void alta_usuario(Usuario mis_usuarios[]);
void listado_usuarios_por_apellido(Usuario mis_usuarios[]);
void grabar_usuarios_fichero(Usuario mis_usuarios[]);
void leer_usuarios_fichero (Usuario mis_usuarios[]);
void eliminar_espacios (char sLiteral[]);
void ordenar_usuarios (Usuario mis_usuarios[]);
int busqueda_usuarios(Usuario mis_usuarios[]);
void modificacion_usuarios(Usuario mis_usuarios[]);
void baja_usuarios(Usuario mis_usuarios[]);
int comprobar_email(char email[]);
void alta_vehiculo(Vehiculo mis_vehiculos[]);
void listado_vehiculos_ordenado (Vehiculo mis_vehiculos[], char sOpcion[]);
void grabar_vehiculos_fichero (Vehiculo mis_vehiculos[]);
void leer_vehiculos_fichero (Vehiculo mis_vehiculos[]);
void ordenar_vehiculos_marca (Vehiculo mis_vehiculos[]);

int main()
{
    Usuario mis_usuarios[100];
    Vehiculo mis_vehiculos[100];  
   
    leer_usuarios_fichero (mis_usuarios);
    leer_vehiculo_fichero (mis_vehiculos);    
    
    menu_general(mis_usuarios, mis_vehiculos);
    
    
    return 0;
}

void menu_general(Usuario mis_usuarios[], Vehiculo mis_vehiculos[])
{   
int iOpcion;

	
	do{
       
    	
        do {
			system("cls");
			printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
	    	printf("\n_______________________MENU PRINCIPAL______________________________\n\n");
        	printf("\n1. Gestion de Usuarios.");
        	printf("\n2. Gestion de Vehiculos.");
	        printf("\n3. Salir.");
    	    printf("\n___________________________________________________________________\n");
        	printf("\n\n\nIntroduzca su opcion: ");
    		fflush(stdin);        	
        	scanf("%d",&iOpcion);
        	printf("\n");
        } while(iOpcion < 1 || iOpcion > 3);
        
     
        switch (iOpcion)
		{
            case 1:
                
		 menu_usuarios(mis_usuarios);
                
            break;
            
            case 2:
            	
	         menu_vehiculos(mis_vehiculos);
				
            break;
            
            case 3:
            	
                printf("Saliendo del programa...");
				
            break;
							
            default:
                printf("\nOpcion no valida\n");
                
	    break;
             
        
		}
    }while (iOpcion!= 3);
}

void menu_usuarios(Usuario mis_usuarios[])
{
int iOpcion;


	
	do{
       
        do {
			system("cls");
			printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
	    	printf("\n_______________________GESTIÓN DE USUARIOS_______________________________\n\n");
        	printf("\n1. Registrarse.");
        	printf("\n2. Borrar usuario.");
        	printf("\n3. Modificar datos usuario.");
        	printf("\n4. Consulta de usuarios.");
	        printf("\n5. Volver a menu general.");
    	    printf("\n___________________________________________________________________\n");
        	printf("\n\n\nIntroduzca su opcion: ");
			fflush(stdin);        	
        	scanf("%d",&iOpcion);
        	printf("\n");
        } while(iOpcion < 1 || iOpcion > 5);

               
        switch (iOpcion)
		{
            case 1:
                
				alta_usuario(mis_usuarios);
				grabar_usuarios_fichero (mis_usuarios);
                
            break;
            
            case 2:
            	
				baja_usuarios(mis_usuarios);
				grabar_usuarios_fichero (mis_usuarios);
				
            break;	
                        
			case 3:
				
				modificar_usuarios(mis_usuarios);
				grabar_usuarios_fichero (mis_usuarios);
			
			break;	
			
			case 4:
                
				busqueda_usuarios(mis_usuarios);
                system("pause");				

			break;	
			
			case 5:
                
				printf("\n Volviendo al menu general\n");			
				
            break;
				
			break;				
          
            default:
                printf("\nOpcion no valida\n");
                system("pause");                
        
		}
    } while (iOpcion!= 5);
    
			
}

 void menu_vehiculo (Vehiculo mis_vehiculos[])
{   
int iOpcion;

	
	do{
       
    	
        do {
			system("cls");
			printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
	    	printf("\n_______________________MENU VEHICULOS______________________________\n\n");
        	printf("\n1. Añadir vehiculos.");
	        printf("\n2. Borrar vehiculos.");
	        printf("\n3. Modificar datos de vehiculos.");
	        printf("\n4. Buscar vehiculo.");
	        printf("\n5. Listado por marca.");
	        printf("\n6. Listado por tipo.");
	        printf("\n7. Volver a menu general.");
    	    printf("\n___________________________________________________________________\n");
        	printf("\n\n\nIntroduzca su opcion: ");
    		fflush(stdin);        	
        	scanf("%d",&iOpcion);
        	printf("\n");
        } while(iOpcion < 1 || iOpcion > 7);
        
        
        switch (iOpcion)
		{
            case 1:
                
			alta_vehiculo(mis_vehiculos);
                
            break;
            
            case 2:
            	
	           baja_vehiculo(mis_vehiculos);
				
            break;
            
            case 3:
            	
                modificacion_vehiculo(mis_vehiculos);
				
            break;
            
            case 4:
            	
            	busqueda_vehiculo(mis_vehiculos);
            	
            break;
			
			case 5:
			 
			  listado_vehiculos_ordenado(mis_vehiculos,iOpcion);
			  
			  break;
			  
			 case 6:	
                    
				listado_vehiculos_ordenado(mis_vehiculos,iOpcion);
					
				break;
				    	
			case 7:
                
				printf("\nSaliendo del programa.\n");
				
			break;				
          
            default:
                printf("\nOpcion no valida\n");
                
                break;
             
        
		}
    }while (iOpcion!= 7);
}

void alta_usuario(Usuario mis_usuarios[])
{
	int i;
	int longitud;
	int x=0;
	int iContador;
	int iResultado;
	int iRegistrados;
	char nickname[100];
	
	
	for(iRegistrados = 0 ; (strcmp(mis_usuarios[iRegistrados].nickname,"") !=0) ; iRegistrados++);
	
	mis_usuarios[iRegistrados].num_registro = iRegistrados;
	
	system("cls");
	printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
	printf("\n_____________________ALTA DE USUARIOS______________________________\n\n");


    do
	{
     	printf("Nickname: ");
		fflush(stdin);
 	 	
		for(iContador = 0 ; ( (strcmp(mis_usuarios[iContador].nickname, nickname)!=0) && (iContador <= iRegistrados ) ); iContador++);
		
		if (iContador <= iRegistrados)
			printf("\nEl nickname %s ya está en uso y por tanto no puede ser elegido.\n\n", mis_usuarios[iContador].nickname);	
	} while ( iContador <= iRegistrados );   
	strcpy (mis_usuarios[iRegistrados].nickname, nickname);
		    
	printf("Nombre del Usuario: ");
	fflush(stdin);
	fgets(mis_usuarios[iRegistrados].nombre, 15, stdin);
	eliminar_espacios(mis_usuarios[iRegistrados].nombre);
        
    printf("Apellido del Usuario: ");
    fflush(stdin);
	fgets(mis_usuarios[iRegistrados].apellido, 25, stdin);
	eliminar_espacios(mis_usuarios[iRegistrados].apellido);
              
	
	
void grabar_usuarios_fichero (Usuario mis_usuarios[])
{   
    int iContador;
 
	FILE *pFichero;
    	    
	pFichero = fopen("Usuarios.txt","w");
	
	if (pFichero == NULL)
	{	
		printf("\nError al abrir el fichero de Usuarios.\n");
		system("pause");		
	}
	else
	{	
		printf("\nFichero de Usuarios abierto correctamente.\n");
		for(iContador = 0 ; (strcmp(mis_usuarios[iContador].nickname,"") !=0) ; iContador++)
		{	
			fprintf(pFichero, "%4d; %-11s; %-15s; %-25s; %-15s;\n", mis_usuarios[iContador].num_registro, mis_usuarios[iContador].nickname, mis_usuarios[iContador].nombre, mis_usuarios[iContador].apellido, mis_usuarios[iContador].email);
		}		
	}
	

	fclose(pFichero);      					

}

void leer_usuarios_fichero (Usuario mis_usuarios[])
{   
    int iContador;
	FILE *pFichero;

	int num_registro;
    	        
	pFichero = fopen("Usuarios.txt","r");
	
	if (pFichero == NULL)
	{	
		printf("\nError al abrir el fichero de Usuarios.\n");
		system("pause");		
	}	
	else
	{	
		printf("\nFichero de Usuarios abierto correctamente.\n");
		iContador = 0;
		while ( !feof(pFichero) )
		{
			fscanf(pFichero, "%d; %[^;]; %[^;]; %[^;]; %[^;];\n", &num_registro, mis_usuarios[iContador].nickname, mis_usuarios[iContador].nombre, mis_usuarios[iContador].apellido, mis_usuarios[iContador].email);		
			mis_usuarios[iContador].num_registro = num_registro;			
			eliminar_espacios (mis_usuarios[iContador].nickname);
			eliminar_espacios (mis_usuarios[iContador].nombre);
			eliminar_espacios (mis_usuarios[iContador].apellido);
			eliminar_espacios (mis_usuarios[iContador].email);														
		
			iContador++;
		}		
	}
	       
	      
	fclose(pFichero);      					

}
	
	
	
	
	
    do
	{
        printf ("e-mail: ");
        fflush(stdin);
        fgets(mis_usuarios[iRegistrados].email, 40, stdin);
		eliminar_espacios(mis_usuarios[iRegistrados].email);      
        iResultado = comprobar_email(mis_usuarios[iRegistrados].email);
 	  
		if (iResultado==2)
			printf("\nDireccion de email valida\n\n")  ;
		else
			printf("\nDireccion de email no valida\n\n");
	} while ( iResultado!=2 );
	
	printf("\nEl Usuario ha sido dado de alta correctamente.\n\n");
	system("pause");
}

void eliminar_espacios (char sLiteral[])
{   
    int iLongitud;
    int iContador;
    

	iLongitud=strlen(sLiteral);
	

	for(iContador = 0; (iContador<iLongitud); iContador++)
		if (sLiteral[iContador]=='\n')
			sLiteral[iContador]='\0';	

	
		sLiteral[iContador]='\0';
 }
		   
void ordenar_usuarios (Usuario mis_usuarios[])
{
int iRegistros;
	
	char tmp[100];
	int num_tmp;
    
    
	for(iRegistros = 0 ; (strcmp(mis_usuarios[iRegistros].nickname,"") !=0) ; iRegistros++);
	
	int i, j;
	
	
	for(i=0; i<iRegistros-1; i++)
	{
		for(j=i+1; j<iRegistros; j++)
		{
		
			if(strcmp(mis_usuarios[i].apellido, mis_usuarios[j].apellido) > 0)
			{
				
			if(strcmp(mis_usuarios[i].apellido, mis_usuarios[j].apellido) > 0)
			{
			
				num_tmp = mis_usuarios[i].num_registro;
				mis_usuarios[i].num_registro = mis_usuarios[j].num_registro;
				mis_usuarios[j].num_registro = num_tmp;
				strcpy (tmp, mis_usuarios[i].nickname);
				strcpy (mis_usuarios[i].nickname, mis_usuarios[j].nickname);
				strcpy (mis_usuarios[j].nickname, tmp);
				strcpy (tmp, mis_usuarios[i].nombre);
				strcpy (mis_usuarios[i].nombre, mis_usuarios[j].nombre);
				strcpy (mis_usuarios[j].nombre, tmp);
				strcpy (tmp, mis_usuarios[i].apellido);
				strcpy (mis_usuarios[i].apellido, mis_usuarios[j].apellido);
				strcpy (mis_usuarios[j].apellido, tmp);
				strcpy (tmp, mis_usuarios[i].email);
				strcpy (mis_usuarios[i].email, mis_usuarios[j].email);
				strcpy (mis_usuarios[j].email, tmp);
				
				}
			
			}	
		}
	}
}

int busqueda_usuarios(Usuario mis_usuarios[])
{   

    int iContador, iEncontrado;
    
	char Literal[100];
    	
	system("cls");
	printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
	printf("\n___________________BUSQUEDA DE USUARIOS____________________________\n\n");
    printf("\nIntroduzca el literal del usuario a buscar (por nombre o por apellido): ");
    fflush(stdin);        	
    scanf("%s",Literal);
    printf("\n");
 
 	
 	iEncontrado = 0;
 
 
	for(iContador = 0 ; (strcmp(mis_usuarios[iContador].nickname,"") !=0) ; iContador++)
	{
	
		if ( (strstr(mis_usuarios[iContador].nombre,Literal) != NULL) || (strstr(mis_usuarios[iContador].apellido,Literal) != NULL) )
		{
			
			iEncontrado ++;
		
			if (iEncontrado == 1)
			{
				printf("\n   # %-11s %-15s %-25s %-15s","NICKNAME", "NOMBRE","APELLIDO", "EMAIL");
				printf("\n   _ ___         ______          ________                  _____\n");
			}
		
			printf("\n%4d %-11s %-15s %-25s %-15s", mis_usuarios[iContador].num_registro, mis_usuarios[iContador].nickname, mis_usuarios[iContador].nombre, mis_usuarios[iContador].apellido, mis_usuarios[iContador].email);
		}
	}					
	printf("\n");

	if (iEncontrado == 0)
	{
		printf("\nNo hay Usuarios que cumplan la condicion.\n\n");
		return 1;
	}

	else
	{
		printf("\n");
		return 0;
	}
}

void modificacion_usuarios(Usuario mis_usuarios[])
{   
    int iContador, iContador2, iRegistrados;
	char Temporal[100];
	int num_registro;
	int iResultado;

		
	iResultado = busqueda_usuarios(mis_usuarios);
	
	
	if (iResultado == 0)
	{
		
		for(iRegistrados = 0 ; (strcmp(mis_usuarios[iRegistrados].nickname,"") !=0) ; iRegistrados++);	 	

		
		do {
			
			printf("\nIntroduzca el numero de registro del Usuario a modificar: ");
    		fflush(stdin);        	
    		scanf("%d", &num_registro);
    		printf("\n");
 	 		
			for(iContador = 0 ; (mis_usuarios[iContador].num_registro != num_registro) && (iContador <= iRegistrados ); iContador++);
		
			if (iContador > iRegistrados)
				printf("\nNo existe el registro %d.\n\n", num_registro);			
		} while (iContador > iRegistrados); 

    		do
			{	
    			printf("Nickname (actual %s): ", mis_usuarios[iContador].nickname);
    			fflush(stdin); 
				fgets(Temporal, 10, stdin);
				eliminar_espacios (Temporal);   			
 	 			
				for(iContador2 = 0 ; ( (strcmp(mis_usuarios[iContador2].nickname, Temporal)!=0) && (iContador2 <= iRegistrados ) ); iContador2++);
				if (iContador2 <= iRegistrados && strcmp(Temporal,"") !=0 )
					printf("\nEl nickname %s corresponde a otro usuario existente (no puede haber duplicados).\n\n", mis_usuarios[iContador2].nickname);
			} while ( iContador2 <= iRegistrados && strcmp(Temporal,"") !=0 );
    		if (strcmp(Temporal,"") !=0)		
				strcpy (mis_usuarios[iContador].nickname, Temporal);
		

    		    
		printf("Nombre del usuario (actual %s): ", mis_usuarios[iContador].nombre);
		
    	strcpy(Temporal, mis_usuarios[iContador].nombre);
		fflush(stdin);  
		fgets(mis_usuarios[iContador].nombre, 15, stdin);
		eliminar_espacios (mis_usuarios[iContador].nombre);
     	
    	if (strcmp(mis_usuarios[iContador].nombre,"") ==0)
    		strcpy(mis_usuarios[iContador].nombre, Temporal);
	        
    	printf("Apellido del Usuario (actual %s): ", mis_usuarios[iContador].apellido);
    	strcpy(Temporal, mis_usuarios[iContador].apellido);
		fflush(stdin);
		fgets(mis_usuarios[iContador].apellido, 25, stdin); 
		eliminar_espacios (mis_usuarios[iContador].apellido);
    	if (strcmp(mis_usuarios[iContador].apellido,"") ==0)
        	strcpy(mis_usuarios[iContador].apellido, Temporal);       
     
		
		iResultado = 2;       
    	do
		{	
        	printf ("e-mail del Usuario (actual %s): ", mis_usuarios[iContador].email);
  			strcpy(Temporal, mis_usuarios[iContador].email); 
        	fflush(stdin);
        	fgets(mis_usuarios[iContador].email, 40, stdin);
			eliminar_espacios (mis_usuarios[iContador].email);		        	
          	
    		if (strcmp(mis_usuarios[iContador].email,"") ==0)
    		{	
    			strcpy(mis_usuarios[iContador].email, Temporal);
			}
		
        	else
        	{
        		
        		iResultado = comprobar_email(mis_usuarios[iContador].email);
 	  
				if (iResultado==2)
					printf("\nDireccion de email valida\n\n")  ;
				else
					printf("\nDireccion de email no valida\n\n");
			}

		} while ( iResultado!=2 );  
		
		printf("\nEl Usuario ha sido modificado correctamente.\n\n");
	
	} 
 
	system("pause");  

}

void baja_usuarios(Usuario mis_usuarios[])
{
	
    int iRegistroBuscado, iRegistrados, iContador;
	int num_registro;
	char cSeguro;
	
	int iResultado;
	
	
	iResultado = busqueda_usuarios(mis_usuarios);
	

	if (iResultado == 0)
	{
	
	    
		for(iRegistrados = 0 ; (strcmp(mis_usuarios[iRegistrados].nickname,"") !=0) ; iRegistrados++);	 	

		
		do {
			
			printf("\nIntroduzca el numero de registro del Usuario a eliminar: ");
    		fflush(stdin);        	
    		scanf("%d", &num_registro);
    		printf("\n");
 	
 		
			for(iRegistroBuscado = 0 ; (mis_usuarios[iRegistroBuscado].num_registro != num_registro) && (iRegistroBuscado <= iRegistrados ); iRegistroBuscado++);
		
			if (iRegistroBuscado > iRegistrados)
				printf("\nNo existe el registro %d.\n\n", num_registro);				
		
		} while (iRegistroBuscado > iRegistrados); 

		
	
	
	
	
		
		
	
		
			do {
				printf("\n%4d %-11s %-15s %-25s %-15s", mis_usuarios[iRegistroBuscado].num_registro, mis_usuarios[iRegistroBuscado].nickname, mis_usuarios[iRegistroBuscado].nombre, mis_usuarios[iRegistroBuscado].apellido, mis_usuarios[iRegistroBuscado].email);
				printf("\n\nSe va a proceder a borrar el registro anterior.  Esta seguro? (s/n) ");
    			fflush(stdin);        	
    			scanf("%c", &cSeguro);
    			printf("\n");
				} while (cSeguro != 's' && cSeguro != 'n');
	
		
			if (cSeguro == 's')
			{	
			
				for(iContador = iRegistroBuscado ; (strcmp(mis_usuarios[iContador].nickname,"") !=0) ; iContador++)
				{	
				
					mis_usuarios[iContador].num_registro = mis_usuarios[iContador+1].num_registro;
					strcpy (mis_usuarios[iContador].nickname, mis_usuarios[iContador+1].nickname);
					strcpy (mis_usuarios[iContador].nombre, mis_usuarios[iContador+1].nombre);
					strcpy (mis_usuarios[iContador].apellido, mis_usuarios[iContador+1].apellido);
					strcpy (mis_usuarios[iContador].email, mis_usuarios[iContador+1].email);
				}				
		
				for(iContador = 0 ; (strcmp(mis_usuarios[iContador].nickname,"") !=0) ; iContador++)
					mis_usuarios[iContador].num_registro = iContador;
				printf("\nEl Usuario ha sido eliminado correctamente.\n\n");
			}
			else
				printf("\nEl Usuario no ha sido eliminado.\n\n");		

		

		
	} 
 
	system("pause");  
}


int comprobar_email(char email[])
{   
    int iLongitud;
    int iResultado=0;
    int iContador;
    
   iLongitud=strlen(email);

		for(iContador = 0; (iContador<iLongitud && iResultado!=1); iContador++)
	{ 
		if (email[iContador] == '@')
			iResultado=1;
	}		


	if (iResultado==1)
	{
		while(iContador<iLongitud && iResultado!=2)
		{
			iContador++;
			if (email[iContador]=='.') iResultado=2;
		}		
	}	  
	
	return (iResultado);

}

void alta_vehiculo(Vehiculo mis_vehiculos[])
{   
	int iOpcion;
    int iContador;
    char smodelo[100];
    int iRegistrados;
    
    
    for(iRegistrados = 0 ; (strcmp(mis_vehiculos[iRegistrados].modelo,"") !=0) ; iRegistrados++);
       
   
    mis_vehiculos[iRegistrados].num_vehiculo = iRegistrados;
	
    system("cls");
    printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");		
    printf("\n_______________________ALTA DE VEHICULOS______________________________\n\n");

	
    printf("Tipo del vehiculo: ");
    fflush(stdin);
	fgets(mis_vehiculos[iRegistrados].tipo, 35, stdin);
	eliminar_espacios (mis_vehiculos[iRegistrados].tipo);
	
     printf("Marca del vehiculo: ");
    fflush(stdin);
    fgets(mis_vehiculos[iRegistrados].marca, 35, stdin);
	eliminar_espacios (mis_vehiculos[iRegistrados].marca); 
	
    printf("Modelo: ");
    fflush(stdin);
	fgets(smodelo, 11, stdin);
	eliminar_espacios (smodelo);    
	strcpy (mis_vehiculos[iRegistrados].modelo, smodelo);
		    
    printf("Carroceria del vehiculo: ");
    fflush(stdin);
    fgets(mis_vehiculos[iRegistrados].carroceria, 20, stdin);
	eliminar_espacios (mis_vehiculos[iRegistrados].carroceria);
    
      

	printf("\nEl vehiculo ha sido dado de alta correctamente.\n\n");
	system("pause");
}

void listado_vehiculos_ordenado (Vehiculo mis_vehiculos[], char sOpcion[])
{   
    int iContador;
    

    if (sOpcion == "tipo")
    {
    	
    	ordenar_vehiculos_tipo (mis_vehiculos);
    	system("cls");
		printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");    	
		printf("\n________________LISTADO DE VEHICULOS POR TIPO_______________________\n\n");    	
	}
	else if (sOpcion == "marca")
	{
		
		ordenar_vehiculos_marca (mis_vehiculos);
    	system("cls");
		printf("\n__________________ENGINE FAILURE CORPORATION__________________________\n\n");    	
		printf("\n________________LISTADO DE VEHICULOS POR MARCA________________________\n\n");   		
	}
	
	
    	 
    	    

	printf("\n   # %-15s %-20s %-15s %-15s","MODELO", "TIPO","CARROCERIA", "MARCA");
	printf("\n   _ ____        ______                              ______               _____\n");
 
  	
	for(iContador = 0 ; (strcmp(mis_vehiculos[iContador].modelo,"") !=0) ; iContador++)
	{
		
		printf("\n%4d %-11s %-35s %-20s %-35s", mis_vehiculos[iContador].num_vehiculo, mis_vehiculos[iContador].modelo, mis_vehiculos[iContador].tipo, mis_vehiculos[iContador].carroceria, mis_vehiculos[iContador].marca);
	}
	printf("\n\n");
    system("pause");
}
	
void grabar_vehiculos_fichero (Vehiculo mis_vehiculos[])
{   
    int iContador;
	FILE *pFichero;
    	    
	pFichero = fopen("Vehiculos.txt","w");

	if (pFichero == NULL)
	{	
		printf("\nError al abrir el fichero de Vehiculos.\n");
		system("pause");		
	}

	else
	{	
		printf("\nFichero de Vehiculos abierto correctamente.\n");
		for(iContador = 0 ; (strcmp(mis_vehiculos[iContador].modelo,"") !=0) ; iContador++)
		{	
			fprintf(pFichero, "%4d; %-11s; %-35s; %-20s; %-35s;\n", mis_vehiculos[iContador].num_vehiculo, mis_vehiculos[iContador].modelo, mis_vehiculos[iContador].tipo, mis_vehiculos[iContador].marca, mis_vehiculos[iContador].carroceria);			
		}		
	}

	fclose(pFichero);      					

}
	


void leer_vehiculos_fichero (Vehiculo mis_vehiculos[])
{   
    int iContador;
	FILE *pFichero;


	int num_vehiculo;
    	    
	pFichero = fopen("Vehiculos.txt","r");
	
	if (pFichero == NULL)
	{	
		printf("\nError al abrir el fichero de Vehiculos.\n");
		system("pause");		
	}
	else
	{	
		printf("\nFichero de Vehiculos abierto correctamente.\n");
		iContador = 0;
		while ( !feof(pFichero) )
		{
			fscanf(pFichero, "%d; %[^;]; %[^;]; %[^;]; %[^;];\n", &num_vehiculo, mis_vehiculos[iContador].modelo, mis_vehiculos[iContador].tipo, mis_vehiculos[iContador].carroceria, mis_vehiculos[iContador].marca);
			mis_vehiculos[iContador].num_vehiculo = num_vehiculo;
							
			eliminar_espacios (mis_vehiculos[iContador].modelo);
			eliminar_espacios (mis_vehiculos[iContador].tipo);
			eliminar_espacios (mis_vehiculos[iContador].carroceria);
			eliminar_espacios (mis_vehiculos[iContador].marca);										
		
			iContador++;
		}		
	}
	        
	fclose(pFichero);      					

}

void ordenar_vehiculos_marca (Vehiculo mis_vehiculos[])
{
	
	int iRegistrados;
	char tmp[100];
	int num_tmp;
    
    
	for(iRegistrados = 0 ; (strcmp(mis_vehiculos[iRegistrados].modelo,"") !=0) ; iRegistrados++);
	
	int i, j;
	
	
	for(i=0; i<iRegistrados-1; i++)
	{
		for(j=i+1; j<iRegistrados; j++)
		{
			
			if(strcmp(mis_vehiculos[i].marca, mis_vehiculos[j].marca) > 0)
			{
							
				num_tmp = mis_vehiculos[i].num_vehiculo;
				mis_vehiculos[i].num_vehiculo = mis_vehiculos[j].num_vehiculo;
				mis_vehiculos[j].num_vehiculo = num_tmp;
				strcpy (tmp, mis_vehiculos[i].modelo);
				strcpy (mis_vehiculos[i].modelo, mis_vehiculos[j].modelo);
				strcpy (mis_vehiculos[j].modelo, tmp);
				strcpy (tmp, mis_vehiculos[i].tipo);
				strcpy (mis_vehiculos[i].tipo, mis_vehiculos[j].tipo);
				strcpy (mis_vehiculos[j].tipo, tmp);
				strcpy (tmp, mis_vehiculos[i].carroceria);
				strcpy (mis_vehiculos[i].carroceria, mis_vehiculos[j].carroceria);
				strcpy (mis_vehiculos[j].carroceria, tmp);
				strcpy (tmp, mis_vehiculos[i].marca);
				strcpy (mis_vehiculos[i].marca, mis_vehiculos[j].marca);
				strcpy (mis_vehiculos[j].marca, tmp);
			}
		}
	}		

}
