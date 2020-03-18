#include <stdio.h>

void main ()
{
int op;
char r;
do
{
	/* Este proyecto tiene como función darte a conocer diferentes
caracteristicas tecnicas de vehiculos concretos */
printf("Bienvenido a nuestro programa 'Engine Failure Corporation' \n");


printf("Seleccione el tipo de vehiculo que desea buscar:\n1)Coche\n2)Moto\n3)Furgoneta\n4)Camion\n5)Autobus\n");
  do
  {
  scanf("%i",&op);
  }
  while(op<1||op>6);
  switch(op)
    {
    case 1:
      printf("1)Coche\n");
      break;
    case 2:
      printf("2)Moto\n");
      break;
    case 3:
      printf("3)Furgoneta\n");
      break;
    case 4:
      printf("4)Camion\n");
      break;
	case 5:
      printf("5)Autobus\n");
      break;
      //En un futuro el programa preguntará ciertas características del vehículo para poder concretar un modelo y entregará la información correspondiente del mismo.
	}
    printf("Desea buscar otro vehiculo? Pulse 'r'\n");
    scanf("%s",&r);
}
while(r=='r');
}
