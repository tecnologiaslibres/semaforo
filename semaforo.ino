// Declaramos la variable para el pin del boton
const int boton = 8;
//Defino semaforo 1
int ledPin2 = 2; //LED VERDE
int ledPin3 = 3; //LED AMARILLO
int ledPin4 = 4; //LED ROJO
//defino semaforo 2
int ledPin5 = 5; //LED VERDE
int ledPin6 = 6; //LED AMARILLO
int ledPin7 = 7; //LED ROJO
int valor = 0;
int tiempo = 300;
int tiempo2 = 2500;
void setup(){
 // Con un ciclo activamos los pines del 2 al 7 como salidas
      for (int pin = 2; pin <= 7; pin++) {
        pinMode(pin, OUTPUT);
      }
// El pin del boton lo ponemos como entrada
    pinMode(boton, INPUT);
    }

void loop(){
 // Cambiamos el estado de todos los leds para
 // que esten apagados todos al inicio
for (int pin = 2; pin <= 7; pin++)  {
            digitalWrite(pin, LOW);
          }
//lee el boton y lo guarda en la variable
valor = digitalRead(boton);
//chequea si el boton fue presionado
if (valor == HIGH) { 
        // Prendemos el verde de un semaforo y el
        // rojo del otro semaforo
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    int valor = 0;
    delay(tiempo2);
    valor = 0;
    //inicia el semaforo
    semaforoUno(); 
    }
}


// Programamos el cambio entre semaforos. Cuando el LED tiene la posicion LOW estara apagado, mientras que si esta en posicion HIGH estada encendido.
void semaforoUno() {
pararSemaforo();
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
}
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
} 
//500
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
} 
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, HIGH);
}
//1000
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, LOW);
}
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
//1500
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
}
 for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
//2000
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin2, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
}
//2250
for (int parpadeo = 0; parpadeo <= 250; parpadeo++) {
digitalWrite(ledPin3, HIGH);
delay(10);
}
digitalWrite(ledPin3, LOW);      //apago amarillo semaforo 1
digitalWrite(ledPin4, HIGH);     //prendo rojo semaforo 1
digitalWrite(ledPin7, LOW);      //apago rojo semaforo 2
digitalWrite(ledPin5, HIGH);      //prendo verde semaforo 2
  // Mandamos a llamar al otro semaforo
 semaforoDos();
 if (valor == 0) {
  return;
}
}

// Funcion para el segundo semaforo y sus cambios de estado
void semaforoDos() {
pararSemaforo();
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
  digitalWrite(ledPin5, LOW);
  pararSemaforo();
  if (valor == 0) {
  return;
}
  }

for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
 //500

for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
}

for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
//1000
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, LOW);
pararSemaforo();
} 
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, HIGH);
pararSemaforo();
}
//1500
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, LOW);
pararSemaforo();
} 
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
//2000
for (int parpadeo = 0; parpadeo <= 25; parpadeo++) {
delay(10);
digitalWrite(ledPin5, LOW);
pararSemaforo();
if (valor == 0) {
  return;
}
} 
for (int parpadeo = 0; parpadeo <= 250; parpadeo++) {
delay(10);
digitalWrite(ledPin6, HIGH);
pararSemaforo();
if (valor == 0) {
  return;
}
}
digitalWrite(ledPin6, LOW);    //apago amarillo semaforo 2
digitalWrite(ledPin7, HIGH);   //prendo Rojo semaforo 2
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin2, HIGH);   //prendo verde semaforo 1
pararSemaforo();
if (valor == 0) {
  return;
}
 // Mandamos a llamar al otro semaforo
   semaforoUno();
}

void pararSemaforo(){
      valor = digitalRead(boton);
 if (valor == HIGH) {
      for (int pin = 2; pin <= 7; pin++)  {
            digitalWrite(pin, LOW);
          delay(2500);
          int valor = 0;
          return;
         }
      }
}
