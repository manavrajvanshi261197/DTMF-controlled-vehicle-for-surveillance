void setup() {
  Serial.begin(9600);
  
  for( int i=10;i<=13;i++){
    pinMode(i,INPUT);
    }
  for( int i=4;i<=7;i++){
    pinMode(i,OUTPUT);
    }  

    stopped();
    delay(1000);

}

int A = 4;
int B = 5;
int C = 6;
int D = 7;



void loop() {
  int x = digitalRead(10) << 3 | digitalRead(11) << 2 | digitalRead(12)<< 1 | digitalRead(13);
  if(x==2){
    forward();
    }
  else if(x==8){
    back(); 
  }
  else if (x==6){
    right();
  }
  else if(x==4){
    left();
  }

  else{
    stopped();
  }
    
}




void forward(){
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  }



void back(){
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  }  


void left(){
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  }  


void right(){
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  }  



void stopped(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  }    
