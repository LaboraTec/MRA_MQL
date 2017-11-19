/** MRA e MQL com 1 sensor de passagem
 *  Criado por: Camila Fernandes Cardozo
 *Data: 2017/2
 */
#define sensor 2 // nomeia a porta digital 2 de "sensor"
unsigned long tempo; //  declara a variável tempo como uma unsigned long.
int x; // define a variável x como uma int

void setup() { // neste bloco são escritas as linhas que serão executadas na inicialização do programa
  Serial.begin(9600);  // inicia a comunicação com o a porta serial
  pinMode(sensor, INPUT); // define a porta digital 2 como uma entrada de dados
  pinMode(led, OUTPUT);
  x = 1; // inicializa a variável x com o valor 1
}
void loop() {  neste bloco são escritas linhas que deverão ser repetidamente executadas
  tempo = millis(); // armazena o tempo em milissegundos desde o início da execução do programa
  if ( (digitalRead(sensor) == 1) && (x == 1)) { // se for verdadeeiro, executa o próximo bloco:
    Serial.print(tempo);  // imprime o valor de tempo no monitor serial
    Serial.print(','); // insere uma vírgula de separador
    Serial.println(d); // escreve a leitura atual do tempo no monitor serial
    x = 0; // muda o valor de x para zero;
  }
  if ( (digitalRead(sensor) == 0) && (x == 0)) {  // se for verdadeiro, executa o próximo bloco:
    x  = 1; //muda o valor de x para 1 novamente
  }
}
