// ================================================
// Declaraciones, Constantes, Variables ...
// ================================================
const int led_rojo_PIN = 9;       // Asignamos a la constante led_rojo_PIN el valor 9
const int led_amarillo_PIN = 10;  // Asignamos a la constante led_amarillo_PIN el valor 10
const int led_verde_PIN = 11;     // Asignamos a la constante led_verde_PIN el valor 11
 
const int pulsador_PIN = 2;       // Asignamos a la constante pulsador_PIN el valor 4
 
int led_encendido = 0;            // 0 Led Encendido --> Ninguno
                                  // 1 Led Encendido --> Rojo
                                  // 2 Led Encendido --> Amarillo
                                  // 3 Led Encendido --> Verde
 
// ================================================
// Modulo Inicializacion y Configuracion
// ================================================
void setup()
{
  pinMode(led_rojo_PIN , OUTPUT);     // Definimos el PIN del Led Rojo como SALIDA
  pinMode(led_amarillo_PIN , OUTPUT); // Definimos el PIN del Led Amarillo como SALIDA
  pinMode(led_verde_PIN , OUTPUT);    // Definimos el PIN del Led Verde como SALIDA
 