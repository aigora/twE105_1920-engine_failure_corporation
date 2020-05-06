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
void ordenar_usuarios (Usuario mis_usuarios[]);
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
