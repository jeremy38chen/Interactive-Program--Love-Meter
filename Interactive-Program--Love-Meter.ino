
double    CatchTemp = 0;
double    voltage = 0;
int       degree = 0;

void setup() {
  // put your setup code here, to run once:

    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    CatchTemp = analogRead(A0); 
    Serial.print("Value:");
    Serial.println(CatchTemp);

/////////////////////////////////////

    voltage = (CatchTemp/1024)*5;
    Serial.print("Voltage");
    Serial.println(voltage);


/////////////////////////////////////


    degree = (voltage-0.5)*100;
    Serial.print("C' degree:");
    Serial.println(degree);


////////////////////////////////////


    if(degree<25){

      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      }

      else if (30>degree && degree>25){
 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      }

      else if (degree>30){

      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      }
     

      
    

}
