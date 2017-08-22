/ * División con sumas sucesivas * /
#include <conio.h>
#include <stdio.h>

Int main ()
{
 Int cociente, dividendo, divisor, resto;
 
 Printf ("\ n Introduzca dividendo");
 Scantf ("% d", & dividendo);

 Printf ("\ n Introduzca divisor");
 Scantf ("% d", & divisor);
 
 If (dividendo> 0 && divisor> 0)
 {
     Cociente = 0;
     Resto = dividendo;
  Mientras que (resto> = divisor)
  {
    Resto = divisor;
    Cociente ++;
  }
  
  Printf ("\ n% d div% d =% d (Resto =% d)";
  Dividendo, divisor, cociente, resto);
 
}
  más
  
  Printf ("\ n ERROR: Los números deben ser mayores que cero)";
  
  Getch ();
  Return 0;
  
  }
