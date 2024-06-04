const int vermelho1 = 2;
const int amarelo1 = 4;
const int verde1 = 5;

const int vermelho2 = 19;
const int amarelo2 = 21;
const int verde2 =23;

int tempoA = 3000;
int tempoVER = 5000;

void setup() {
  pinMode(vermelho1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde1, OUTPUT);

  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);
   Serial.begin(115200);
}

void loop() {
  acenderLed(vermelho1);
  acenderLed(verde2);
  delay(tempoVER);
  apagarLed(verde2);
  acenderLed(amarelo2);
  delay(tempoA);
  apagarLed(amarelo2);
  apagarLed(vermelho1);
  acenderLed(verde1);
  acenderLed(vermelho2);
  delay(tempoVER);
  apagarLed(verde1);
  acenderLed(amarelo1);
  delay(tempoA);
  apagarLed(amarelo1);
  apagarLed(vermelho2);
}

void acenderLed (int led){
  digitalWrite(led, HIGH);
}

void apagarLed (int led){
  digitalWrite(led, LOW);
}