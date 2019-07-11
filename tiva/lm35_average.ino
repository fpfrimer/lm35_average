
#define SIZE 512
#define PERIOD 100
#define AVERAGE true

long data[SIZE]; //Armazena os dados convertidos
long acc;   //Acumulador
unsigned int ctn_in = 0;  //Contador de entrada de dados
unsigned int ctn_out = 1; //Contador de saída de dados
float avg;                //Média dos valores lidos
int ti,tf;


void setup() {
  
  Serial.begin(9600); // inicia Serial
  ti = millis();
}


void loop() {

  if (AVERAGE == true){
    data[ctn_in] = analogRead(A11);
    acc += data[ctn_in++] - data[ctn_out++];
    if (ctn_in == SIZE) ctn_in = 0;
    if (ctn_out == SIZE) ctn_out = 0;
    tf = millis();
    if (tf - ti >= PERIOD){
      avg = acc/SIZE;
      Serial.println(avg*330/4095);
      ti = millis();
    }
  }
  else{
    tf = millis();
    if (tf - ti >= PERIOD){      
      Serial.println((float)analogRead(A11)*330/4095);
      ti = millis();
    }
  } 
}
