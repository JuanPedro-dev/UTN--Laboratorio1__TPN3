#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/**1. Desarrollar una funci�n que devuelva un valor RANDOM en el rango de 0 a 100. */
int valorRandom()
{
    return rand() % (100+1); // rand() % (N+1); para un n�mero entre 0 y N
}

/**2.Dise�e una funci�n que reciba 3 n�meros enteros y muestre el mayor y el menor. */
void menorEnTriada(int numberA,int numberB,int  numberC)
{
    // Menor
    if(numberA<= numberB && numberA<= numberC)
    {
        printf("\n >>> El menor de la triada es : %i\n", numberA);
    }
    else if(numberB<= numberA && numberB<= numberC)
    {
        printf("\n >>> El menor de la triada es : %i\n", numberB);
    }
    else
    {
        printf("\n >>> El menor de la triada es : %i\n", numberC);
    }
    // Mayor
    if(numberA>= numberB && numberA>= numberC)
    {
        printf("\n >>> El mayor de la triada es : %i\n", numberA);
    }
    else if(numberB>= numberA && numberB>= numberC)
    {
        printf("\n >>> El mayor de la triada es : %i\n", numberB);
    }
    else
    {
        printf("\n >>> El mayor de la triada es : %i\n", numberC);
    }
}

/**3.Dise�e una funci�n que reciba un n�mero entero N y realice la suma de los n�meros enteros positivos
    menores que N y lo retorne. N es un dato ingresado por el usuario en el main. */
int sumatoriaCeroAN(int finSumatoria)
{
    int contador = 0;
    if(finSumatoria>=0)
    {
        for(int i=0; i<=finSumatoria; i++)
        {
            contador += i;
        }
        return contador;
    }
    else
    {
        return -1; // Documentar si n es negativo devuelve -1
    }
}

/**4. Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro.*/
void tablaMultiplicar(int numberTable)
{
    printf("\n                    La tabla de multiplicar del %d (hasta 10) \n", numberTable);
    for(int i=0; i<=10; i++)
    {
        printf(">>> %d * %d = %d\n", numberTable,i, numberTable*i);
    }
}

/**5.Realice una peque�a calculadora, utilizando funciones (una funci�n de suma, una de multiplicaci�n,
    una de resta, una de divisi�n�)*/
void sumaDosNumeros()
{
    float numeroA, numeroB;
    system("cls");
    printf("\n                              Calculadora\n");
    printf("\n>>> �Qu� n�mero va a sumar?:  ");
    fflush(stdin);
    scanf("%f", &numeroA);
    printf(">>> �Con qu� n�mero lo va a sumar?:  ");
    fflush(stdin);
    scanf("%f", &numeroB);
    float resultado = numeroA + numeroB;
    printf("\n >>> Resultado: %.2f + %.2f = %.2f\n", numeroA, numeroB, resultado);
}

void restaDosNumeros()
{
    float numeroA, numeroB;
    system("cls");
    printf("\n                              Calculadora\n");
    printf("\n >>> �Qu� n�mero va a restar?:  ");
    fflush(stdin);
    scanf("%f", &numeroA);
    printf(">>> �Con qu� n�mero lo va a restar?:  ");
    fflush(stdin);
    scanf("%f", &numeroB);
    float resultado = numeroA - numeroB;
    printf("\n >>> Resultado: %.2f - %.2f = %.2f", numeroA, numeroB, resultado);
}

void multiplicarDosNumeros()
{
    float numeroA, numeroB;
    system("cls");
    printf("\n                              Calculadora\n");
    printf("\n >>> �Qu� n�mero va a multiplicar?:  ");
    fflush(stdin);
    scanf("%f", &numeroA);
    printf(">>> �Con qu� n�mero lo va a multiplicar?:  ");
    fflush(stdin);
    scanf("%f", &numeroB);
    float resultado = numeroA * numeroB;
    printf("\n >>> Resultado: %.2f * %.2f = %.2f", numeroA, numeroB, resultado);
}

void dividirDosNumeros()
{
    float numeroA, numeroB;
    system("cls");
    printf("\n                              Calculadora\n");
    printf("\n >>> �Qu� n�mero va a dividir?:  ");
    fflush(stdin);
    scanf("%f", &numeroA);
    do
    {
        printf(">>> �Con qu� n�mero lo va a dividir? (distinto de cero):  ");
        fflush(stdin);
        scanf("%f", &numeroB);
    }
    while(numeroB==0);
    float resultado = numeroA / numeroB;
    printf("\n >>> Resultado: %.2f / %.2f = %.2f", numeroA, numeroB, resultado);
}

void calculator()
{
    int option;
    do
    {

        system("cls");
        printf("\n                              Calculadora\n");
        printf("\n Elige una operaci�n: \n");
        printf("\n   >> Opci�n 1: Suma.");
        printf("\n   >> Opci�n 2: Resta.");
        printf("\n   >> Opci�n 3: Multiplicaci�n.");
        printf("\n   >> Opci�n 4: divisi�n.\n");
        printf("\n   >> Opci�n ?: ");
        fflush(stdin);
        scanf("%d", &option);
    }
    while (option<=0 || option>=5);

    switch(option)
    {
    case 1:
        sumaDosNumeros();
        break;
    case 2:
        restaDosNumeros();
        break;
    case 3:
        multiplicarDosNumeros();
        break;
    case 4:
        dividirDosNumeros();
        break;
    }
}

/** 6. Realizar una funci�n que reciba un n�mero positivo entero por
        par�metro por referencia, y cambie su signo a negativo. */
void opuesto(int *number)
{
    if (*number>0)
    {
        *number *= -1;
    }
}

/** 7. Realizar una funci�n que reciba dos n�meros enteros por par�metro
    por referencia y cargue sus valores el usuario dentro de la funci�n.*/
void cargarValor(int *numberA, int *numberB)
{
    printf("\n>>> Valor de A: ");
    fflush(stdin);
    scanf("%i", numberA);
    printf(">>> Valor de B: ");
    fflush(stdin);
    scanf("%i", numberB);

}
void saludar()
{
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//        /////////  //      //    //////////   //      //         //      //   //////////  //      //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   ///     //         //      //       //      ///     //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   // /    //         //      //       //      // /    //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //////////   //   /  //         //      //       //      //   /  //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //    / //         //      //       //      //    / //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //     ///         //      //       //      //     ///        //\n");
    Sleep(50);
    printf("//       //////////  //////////    //      //   //      //         //////////       //      //      //        //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(500);
}
void menu()
{
    system("color 3f");
    system("cls");
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//                                     TPN3 - Funciones sin pilas                                             //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//  int main (ejercicio)                                                                                      //\n");
    Sleep(50);
    printf("//  {                                                                                                         //\n");
    Sleep(50);
    printf("//      int opci�n A = 'return valor RANDOM en el rango de 0 a 100';                                          //\n");
    Sleep(50);
    printf("//      int opci�n B = 'Mostrar de 3 n�meros enteros el mayor y el menor. (probar) ';                         //\n");
    Sleep(50);
    printf("//      int opci�n C = 'return sumatoria de los n�meros enteros positivos menores que N';                     //\n");
    Sleep(50);
    printf("//      int opci�n D = 'tabla de multiplicar';                                                                //\n");
    Sleep(50);
    printf("//      int opci�n E = 'calculadora (sumar, restar, multiplicar y dividir)';                                  //\n");
    Sleep(50);
    printf("//      int opci�n F = 'Cambiar de signo a un n�mero positivo';                                               //\n");
    Sleep(50);
    printf("//      int opci�n G = 'Cargar valores a dos variables por teclado';                                          //\n");
    Sleep(50);
    printf("//  }                                                                                                         //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("//        /////////  //      //    //////////   //      //         //      //   //////////  //      //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   ///     //         //      //       //      ///     //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   // /    //         //      //       //      // /    //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//               //  //      //    //      //   //  /   //         //      //       //      //  /   //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //////////   //   /  //         //      //       //      //   /  //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //    / //         //      //       //      //    / //        //\n");
    Sleep(50);
    printf("//       //      //  //      //    //      //   //     ///         //      //       //      //     ///        //\n");
    Sleep(50);
    printf("//       //////////  //////////    //      //   //      //         //////////       //      //      //        //\n");
    Sleep(50);
    printf("//                                                                                                            //\n");
    Sleep(50);
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("\n                                Tu entrada (Terminar Programa: s o S): ");
}

int main()
{
    char option;
    setlocale(LC_ALL,"");
    srand(time(NULL));
    system("color 1F");
    do
    {
        menu();
        fflush(stdin);
        scanf("%c", &option);
        printf("%c", option);

        switch(option)
        {
        case 'a':
        case 'A':
            do
            {
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n A)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                printf("        EL n�mero random generado entre 0 y 100 es: %d\n", valorRandom());
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');

            break;
        case 'b':
        case 'B':
            do
            {
                int numeroA, numeroB, numeroC;
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n\n");
                printf(">>> Ingresar 3 numeros para encontrar el mayor y el menor\n");
                printf(">>> N�mero 1:");
                fflush(stdin);
                scanf("%d", &numeroA);
                printf(">>> N�mero 2:");
                fflush(stdin);
                scanf("%d", &numeroB);
                printf(">>> N�mero 3:");
                fflush(stdin);
                scanf("%d", &numeroC);
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n B)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                menorEnTriada(numeroA,numeroB,numeroC);
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        case 'c':
        case 'C':
            do
            {
                int number;
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n\n");
                printf(">>> Ingresar un n�mero positivo para realizar su sumatoria de 0 a N\n");
                printf(">>> N�mero: ");
                fflush(stdin);
                scanf("%d", &number);
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n C)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                printf("  La sumatoria desde 0 al %i es: %i",number,sumatoriaCeroAN(number));
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        case 'd':
        case 'D':
            do
            {
                int number;
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n\n");
                printf(">>> Ingresar un n�mero para armar su tabla de multiplicar\n");
                printf(">>> N�mero: ");
                fflush(stdin);
                scanf("%d", &number);
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n D)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                tablaMultiplicar(number);
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        case 'e':
        case 'E':
            do
            {
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n D)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                calculator();
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        case 'f':
        case 'F':
            do
            {
                int number;
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n\n");
                printf(">>> Ingresar un n�mero positivo para encontrar su opuesto.\n");
                printf(">>> N�mero: ");
                fflush(stdin);
                scanf("%d", &number);
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n D)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                opuesto(&number);
                printf("  El n�mero fue reemplazado por su negativo: %i\n", number);
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        case 'g':
        case 'G':
            do
            {
                int numberA,numberB;
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n\n");
                printf(">>> Cargaremos dos n�meros.\n");
                cargarValor(&numberA,&numberB);
                system("cls");
                printf("                                     TPN3 - Funciones sin pilas\n");
                Sleep(50);
                printf("\n");
                Sleep(50);
                printf("  int main (opci�n D)\n");
                Sleep(50);
                printf("  {\n");
                Sleep(50);
                printf("  Los n�meros cargados fueron: %i y %i\n", numberA,numberB);
                Sleep(50);
                printf("  }\n\n");
                Sleep(50);
                printf("  Void (ejercicio?) {Repetir: 'r' o 'R', Volver: 'v' o 'V', salir: 's' o 'S'}\n\n");
                Sleep(50);
                printf("  TuRespuesta():");
                fflush(stdin);
                scanf("%c", &option);
            }
            while(option!='v' && option!='V' && option!='S' && option!='s');
            break;
        }
    }
    while(option !='s' && option!='S');
    system("cls");
    saludar();
    system("pause");
    return 0;
}
