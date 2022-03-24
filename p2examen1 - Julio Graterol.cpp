#include<stdio.h>
#include<math.h>
void PedirDatos();
void FuncPolinomios(float& xa, float& yb, float& zc);
void FuncVolumen(int& xrad, int& V);
void FuncMovil(int& Xo, int& Vo, int& t, int& ac);
int opcion, rad, V, Xo, Vo, t, ac;
float A, B, C, x_1, x_2, raiz;

int main(){
	
	printf("Por favor, elija una de las siguientes opciones:\n");
	printf("1. Raiz de un Polinomio. \n2. Volumen de una Esfera. \n3. Desplazamiento de un Movil.\n  ");
	scanf("%d", &opcion);
	
	PedirDatos();
	
	switch(opcion){
		case 1:{
			FuncPolinomios(A, B, C);
			break;
		}
		case 2:{
			FuncVolumen(rad, V);
			break;
		}
		case 3:{
			FuncMovil(Xo, Vo, t, ac);
			break;
		}
		default:{
			printf("Haz elegido una opcion errada.");
			break;
		}
	}
	return 0;
}

void PedirDatos(){
	switch(opcion){
		case 1:{ //Raiz de Polinomios
			printf("Ingrese el valor de A... A = ");
			scanf("%f", &A);
			printf("Ingrese el valor de B... B = ");
			scanf("%f", &B);
			printf("Ingrese el valor de C... C = ");
			scanf("%f", &C);
			printf("  %.fx^2 + %.fx + %.f = 0\n", A, B, C);
			break;
		}
		case 2:{ //Volumen de Esfera
			printf("Ingrese el Valor del radio... r = ");
			scanf("%d", &rad);
			break;
		}
		case 3:{ //Desplazamiento de un Movil
			printf("Ingrese el Desplazamiento inicial:		Xo = ");
			scanf("%d", &Xo);
			printf("Ingrese la Velocidad inicial:			Vo = ");
			scanf("%d", &Vo);
			printf("Ingrese el Tiempo del Desplazamiento:		t = ");
			scanf("%d", &t);
			printf("Ingrese la Aceleracion en este intervalo:	a = ");
			scanf("%d", &ac);
			break;
		}
	}
}

void FuncPolinomios(float& xA, float& yB, float& zC){
	raiz = ((pow(B, 2))-(4 * A * C));
	 printf("La raiz es %.2f \n", raiz);
		if(raiz >= 0){
			x_1 = (-B + (sqrt(raiz))/(2 * A));
			x_2 = (-B - (sqrt(raiz))/(2 * A));
			printf("El valor de x1 = %.2f \nEl Valor de x2 = %.2f.", x_1, x_2);
		}
		else if(raiz < 0){
			printf("Error, esta raiz es compleja.");
		}
	}

void FuncVolumen(int& xrad, int& V){
	if(rad <= 0){
		printf("Error, el radio no puede ser menor o igual a 0.");
	}
	else{
		V = ((3.141592654 * pow(rad, 3))*4/3);
		printf("El Volumen de la esfera es: V = %d.", V);
	}
}

void FuncMovil(int& Xo, int& Vo, int& t, int& ac){
	float Xf;
	Xf = (Xo + Vo + ((ac * pow( t ,2))/2));
	printf("El desplazamiento es: Xf = %.2f.", Xf);
}



