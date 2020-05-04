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
void menu_usuarios(Usuarios mis_usuarios[]);
int main()
{
    Usuario mis_usuarios[100];
    Vehiculos mis_vehicuos[100];  
   
    leer_usuarios_fichero (mis_usuarios);
    leer_vehiculo_fichero (mis_vehiculos);    
    
    menu_general(mis_usuarios, mis_vehiculos);
    
    
    return 0;
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
