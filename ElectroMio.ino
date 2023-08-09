int Pot=A0; int V0=0;
void setup() {
  for(int i=2;i<12;i++){
    pinMode(i,OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  V0 = analogRead(Pot);

  if (V0>1){
    digitalWrite(2, HIGH);
    if(V0>112){
      digitalWrite(3,HIGH);
      if(V0>224){
        digitalWrite(4,HIGH);
        if(V0>336){
          digitalWrite(5,HIGH);
          if(V0>448){
            digitalWrite(6,HIGH);
            if(V0>560){
              digitalWrite(7,HIGH);
              if(V0>672){
                digitalWrite(8,HIGH);
                if(V0>784){
                  digitalWrite(9,HIGH);
                  if(V0>896){
                    digitalWrite(10,HIGH);
                    if(V0>1008){
                      digitalWrite(11,HIGH);
                    }
                  }else{
                    for(int i=10;i<12;i++)
                     digitalWrite(i, LOW);
                  }
                }else{
                  for(int i=9;i<12;i++)
                    digitalWrite(i, LOW);
                }
              }else{
                for(int i=8;i<12;i++)
                 digitalWrite(i, LOW);
              }
            }else{
              for(int i=7;i<12;i++)
                digitalWrite(i, LOW);
            }
          }else{
            for(int i=6;i<12;i++)
              digitalWrite(i, LOW);
          }
        }else{
          for(int i=5;i<12;i++)
            digitalWrite(i, LOW);
        }
      }else{
        for(int i=4;i<12;i++)
          digitalWrite(i, LOW);
      }
    }else{
      for(int i=3;i<12;i++)
        digitalWrite(i, LOW);
    }
  }else{
    for(int i=2;i<12;i++)
      digitalWrite(i, LOW);
  }
  

  
  
}
