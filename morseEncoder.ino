int LED = 13;
int shortTime = 300;
int longTime = 900;
String myString = "";
char dString [100];
int spaceLed = 8;
int pauseLed = 9;
char ch;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
 Serial.println("Enter shit:");
}

void loop() {
  static int i = 0;
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    myString = Serial.readString();
    while(i < myString.length()){
        sCase(myString.charAt(i));
        switchPause();
      i++;
    }
    exit(0);
  }
}

void dot(){
  switchLED( shortTime);
  delay(shortTime * 2);
}

void dash(){
  switchLED(longTime);
  delay(shortTime * 2 );
}

void switchSpace(){
  digitalWrite(spaceLed, HIGH);
  delay(longTime * 3);
  digitalWrite(spaceLed, LOW);
  delay(shortTime);
}

void switchPause(){
  digitalWrite(pauseLed, HIGH);
  delay(longTime * 2);
  digitalWrite(pauseLed, LOW);
  delay(shortTime);
}

void switchLED(int timing){
  digitalWrite(LED, HIGH);
  delay(timing);
  digitalWrite(LED, LOW);
  delay(shortTime);
}

void sCase(char c){
  if(c == ' '){
   switchSpace(); 
  }
  if(c == 'a' || c == 'A'){
    A();
  }
  if(c == 'b' || c == 'B'){
    B();
  }
  if(c == 'c' || c == 'C'){
    C();
  }
  if(c == 'd' || c == 'D'){
    D();
  }
  if(c == 'e' || c == 'E'){
    E();
  }
  if(c == 'f' || c == 'F'){
    ff();
  }
  if(c == 'g' || c == 'G'){
    G();
  }
  if(c == 'h' || c == 'H'){
    H();
  }
  if(c == 'i' || c == 'I'){
    I();
  }
  if(c == 'j' || c == 'J'){
    J();
  }
  if(c == 'k' || c == 'K'){
    K();
  }
  if(c == 'l' || c == 'L'){
    L();
  }
  if(c == 'm' || c == 'M'){
    M();
  }
  if(c == 'n' || c == 'N'){
    N();
  }
  if(c == 'o' || c == 'O'){
    O();
  }
  if(c == 'p' || c == 'P'){
    P();
  }
  if(c == 'q' || c == 'Q'){
    Q();
  }
  if(c == 'r' || c == 'R'){
    R();
  }
  if(c == 's' || c == 'S'){
    S();
  }
  if(c == 't' || c == 'T'){
    T();
  }
  if(c == 'u' || c == 'U'){
    U();
  }
  if(c == 'v' || c == 'V'){
    V();
  }
  if(c == 'w' || c == 'W'){
      ww(); 
  }
  if(c == 'x' || c == 'X'){
    X();
  }
  if(c == 'y' || c == 'Y'){
    Y();
  }
  if(c == 'z' || c == 'Z'){
    Z();
  }
}

void A(){
  dot();
  dash();
}

void B(){
  dash();
  dot();
  dot();
  dot();
}

void C(){
  dash();
  dot();
  dash();
  dot();
}

void D(){
  dash();
  dot();
  dot();
}

void E(){
  dot();
}

void ff(){
  dot();
  dot();
  dash();
  dot();
}

void G(){
  dash();
  dash();
  dot();
}

void H(){
  dot();
  dot();
  dot();
  dot();
}

void I(){
  dot();
  dot();
}

void J(){
  dot();
  dash();
  dash();
  dash();
}

void K(){
  dash();
  dot();
  dash();
}

void L(){
  dot();
  dash();
  dot();
  dot();
}

void M(){
  dash();
  dash();
}

void N(){
  dash();
  dot();
}

void O(){
  dash();
  dash();
  dash();
}

void P(){
  dot();
  dash();
  dash();
  dot();
}

void Q(){
  dash();
  dash();
  dot();
  dash();
}

void R(){
  dot();
  dash();
  dot();
}

void S(){
  dot();
  dot();
  dot();
}

void T(){
  dash();
}

void U(){
  dot();
  dot();
  dash();
}

void ww(){
  dot();
  dot();
  dot();
  dash();
}

void V(){
  dot();
  dash();
  dash();
}

void X(){
  dash();
  dot();
  dot();
  dash();
}

void Y(){
  dash();
  dot();
  dash();
  dash();
}

void Z(){
  dash();
  dash();
  dot();
  dot();
}
