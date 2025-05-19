
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  string minStr = s1;
  if (s2 < minStr) minStr = s2;
  if (s3 < minStr) minStr = s3;
  cout << "El string mínimo en órden lexicográfico es: " << minStr << endl;
}

void exercise_2(double A, double B, double C) {
  double disc = B * B - 4 * A * C;
    double x1 = (-B + sqrt(disc)) / (2 * A);
    double x2 = (-B - sqrt(disc)) / (2 * A);
    
    if (A == 0) {
        cout << "el valor a es 0, lo que hace que el denominador sea 0 y no se puede dividir por 0 la ecuación" << endl;
    }
    else if (disc < 0) {
        cout << "La discriminante es negativa, es imaginaria" << endl;
    } else {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        
        }

}

void exercise_3(int a, int b) {
  if (b == 0) {
        cout << "IMPOSIBLE" << endl;
    }   else {
        cout << "El cociente de la división es: " << a / b << endl;
    }

}

void exercise_4(double n, double a, double b, double x, double y) {
  double cálculo1 = 100 - x;
    double cálculo2 = 100 - y;
    double cálculo3 = n * (cálculo1 / 100);
    double cálculo4 = n * (cálculo2 / 100);
    if (n > b) {
        cout << "Su precio final con el 10% de descuento es: " << cálculo4 << endl;
    }   else if (n == b) {
        cout << "El precio es igual a 150, entonces no tiene descuento" << endl;
    }   else if (n > a ) {
        cout << "Su precio final con el 5% de descuento es: " << cálculo3 << endl;
    }   else {
        cout << "El precio es menor o igual a 100, entonces no tiene descuento" << endl;
    }

}

void exercise_5(char character) {
  if (character >= 65 && character <= 90) {
        cout << "Su carácter es MAYÚSCULA" << endl;
    }   else if (character >= 97 && character <= 122) {
        cout << "Su carácter es minúscula" << endl;
    }   else {
        cout << "Su carácter no representa una minúscula o mayúscula en el código ASCII" << endl;
    }

}


void exercise_6(int number) {
  switch (number) {
        case 1:
        cout << "Lunes" << endl;
        break;
        case 2:
        cout << "Martes" << endl;
        break;
        case 3:
        cout << "Miércoles" << endl;
        break;
        case 4:
        cout << "Jueves" << endl;
        break;
        case 5:
        cout << "Viernes" << endl;
        break;
        case 6:
        cout << "Sábado" << endl;
        break;
        case 7: 
        cout << "Domingo" << endl;
        break;
        
        default:
        cout << "Día no válido" << endl;
    }

}

void exercise_7(double r) {
  double pi = 3.1416;
  double cálculo = 4 * pi * (r * r);
    if (r > 0) {
        cout << "El radio de su esfera es: " << cálculo << endl;
    }   else {
        cout << "Radius cannot be negative" << endl;
    }

}

void exercise_8(long int seconds) {
  if (seconds < 0) {
        cout << "Input seconds cannot be negative" << endl;
    }   else {
        int horas = seconds / 3600;
        int minutos = (seconds % 3600) / 60;
        int segundos = seconds % 60;
        cout << seconds << " equivalen a: " << endl;
        cout << horas << ":" << minutos << ":" << segundos << endl;
    }  

}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
    char pl1 = s1[0];
    char pl2 = s2[0];
    char pl3 = s3[0];
    char pl4 = s4[0];
    char pl5 = s5[0];
    string result;
    result += pl1;
    result += pl2;
    result += pl3;
    result += pl4;
    result += pl5;
    result += "\n";
    if (pl1 == pl5) {
        result += "Hemos encontrado algo!";
    } else {
        result += "Aún sin suerte";
    }
    return result;
}

int exercise_10(int a, int b) {
  if (a < 0 || b < 0) {
        cout << 0 << endl;
        return 0;
    }

    int suma = a + b;
   
    int temp = suma;
    int digitos = 0;
    
    if (temp == 0) {
        digitos = 1;  
    } else {
        while (temp != 0) {
            temp /= 10;
            digitos++;
        }
    }
    
    int resultado = suma * digitos;
    return resultado;
}

string exercise_11(int number) {
  int código = 11235813;
  string perrito = "Fibo";
  if (number == código) {
        return "Se encontró a " + perrito;
    } else {
        return "Este no es " + perrito;
    }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  bool casa1 = (color4 == "?" || color4== color1) && (numb4 == -1 || numb4 == numb1);
    bool casa2 = (color4 == "?" || color4 == color2) && (numb4 == -1 || numb4 == numb2);
    bool casa3 = (color4 == "?" || color4 == color3) && (numb4== -1 || numb4 == numb3);

    if (casa1) cout << "1" << endl;
    if (casa2) cout << "2" << endl;
    if (casa3) cout << "3" << endl;

}

string exercise_13(int age, int years_of_experience) {
    string puesto1 = "Coordinador de proyectos";
    string puesto2 = "Director de proyecto";
    string puesto3 = "Director de proyecto senior";
    if (age < 18) {
        return "Usted no es mayor de edad";
    }   else if (age < 0) {
        return "RESPUESTA NO VÁLIDA";
    }   else if (age >= 5) {
        return "Puede postularse para el cargo de: ";
    }   else if (age >= 3) {
        return "Puede postularse para el cargo de: ";
    }   else {
        return "Puede postularse para el cargo de: ";
    }   
}

string exercise_14(int number_of_docs) {
  if (number_of_docs == 0) {
        return "No se encontraron documentos";
    }   else if (number_of_docs == 1) {
        return "Se encontró un documento";
    }   else if (number_of_docs > 1) {
        return number_of_docs + " documentos encontrados";
    }   else {
        return "Respuesta no válida";
    }
}

void exercise_15(int a, int b, int c) {
  cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a ⇒ b, b ⇒ c, c ⇒ a" << endl;
    int temp = a;
    a = c;
    c = b;
    b = temp;
  cout << "Los valores despues de la permutación son: a = " << a << " b = " << b << " c = " << c;
}

void exercise_16(int debut, int fin) {
  if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return 0;
    }
    if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return 0;
    }
    if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return 0;
    }
    
    int totalHoras = fin - debut;
    int costo = 0;
    int horasTarifa1 = 0, horasTarifa2 = 0;
    
    for (int hora = debut; hora < fin; hora++) {
        if ((hora >= 0 && hora < 7) || (hora >= 17 && hora < 24)) {
            costo += 1;
            horasTarifa1++;
        } else {
            costo += 2;
            horasTarifa2++;
        }
    }
    
    cout << "Has alquilado una bicicleta por " << totalHoras << " hora(s)" << endl;
    if (horasTarifa1 > 0)
        cout << horasTarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    if (horasTarifa2 > 0)
        cout << horasTarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    cout << "El monto total a pagar es de " << costo << " boliviano(s)." << endl;

}