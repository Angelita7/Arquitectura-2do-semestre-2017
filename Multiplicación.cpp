/ * Multiplicaci�n con sumas sucesivas * /
#include <conio.h>
#include <stdio.h>

Int main ()
{
   Int acumulador, contador, n1, n2;
   
   Printf ("\ n Introduzca un numero");
   Scantf ("% d", & n1);
   
   Printf ("\ n Introduzca un numero");
   Scantf ("% d", & n2);
   
   If (n1> = 0 && n2> = 0)
   { 
     Acumulador = 0;
     Si (n _ {2} = 0)
     {
       Contador = 1;
       Mientras que (contador <= n1)
       {
         Acumulador + = n2;
         Contador ++;
         }
      }
      
      Printf ("\ n% d *% d =% d", n1, n2, acumulador);
      
      }
      m�s
      Printf ("\ n ERROR: Los n�meros deben ser mayores o iguales a cero");
      
      Getch ();
      Return 0;
 }

