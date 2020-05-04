#include<stdio.h>
typedef struct
{
	char nickname[100];
	char correo[100];
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
int main()
{
    Usuario mis_usuarios[100];
    Vehiculos mis_vehiculos[100];  
   
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

void menu_usuarios(Usuarios mis_usuarios[])
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
	        printf("\n7. Volver a menu general.")
    	    printf("\n___________________________________________________________________\n");
        	printf("\n\n\nIntroduzca su opcion: ");
    		fflush(stdin);        	
        	scanf("%d",&iOpcion);
        	printf("\n");
        } while(iOpcion < 1 || iOpcion > 7);
        
        
        switch (iOpcion)
		{
            case 1:
                
			   alta_vehiculo(Vehiculo mis_vehiculos[]);
                
            break;
            
            case 2:
            	
	           baja_vehiculo(Vehiculo mis_vehiculos[]);
				
            break;
            
            case 3:
            	
                modificacion_vehiculo (Vehiculo mis_vehiculos[]);
				
            break;
            
            case 4:
            	
            	busqueda_vehiculo (Vehiculo mis_vehiculos[]);
            	
            break;
			
			case 5:
			 
			  listado_vehiculos_ordenado (Vehiculo mis_vehiculos, int iOpcion);
			  
			  break;
			  
			 case 6:	
                    
				listado_vehiculos_ordenado (Vehiculo mis_vehiculos, int iOpcion);
					
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
    
			
