int Pot=A0; int V0=0; int min=1026; int max=0; int cnt=0; int rng=0; 
int prom=0;int prom1=0;
void setup() {
  for(int i=2;i<12;i++){
    pinMode(i,OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {

  if(cnt==0){
    
    for(int i=0;i<100;i++){
      V0 = analogRead(Pot);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      if(V0<min){
        min=V0;
      }
      delay(50);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
    }

      digitalWrite(2,HIGH);
      delay(2000);
      digitalWrite(2,LOW);

    for(int i=0;i<300;i++){
      V0 = analogRead(Pot);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      prom1=prom1+V0;
      delay(14);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
    }

    prom1=prom1/300;
    max=prom1;
    digitalWrite(2,HIGH);

    for(int i=0;i<100;i++){
      V0 = analogRead(Pot);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      if(V0<min){
        min=V0;
      }
      delay(50);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
    }
    cnt=10;
  }
     
    
  if(cnt==10){
    for(int i=2;i<12;i++){
      digitalWrite(i, LOW);
      delay(100);
    }
    cnt++;
    rng=(max/2);
    rng=rng/10;
  }

  if(cnt==11){
    prom=0;
    for(int i=0;i<100;i++){
      V0 = analogRead(Pot);
      prom=prom+V0;
    }
    prom=prom/100;
    V0=prom;
      if (V0>=min){
        digitalWrite(2, HIGH);
        if(V0>(min+rng)){
          digitalWrite(3,HIGH);
          if(V0>(min+(2*rng))){
            digitalWrite(4,HIGH);
            if(V0>(min+(3*rng))){
              digitalWrite(5,HIGH);
              if(V0>(min+(4*rng))){
                digitalWrite(6,HIGH);
                if(V0>(min+(5*rng))){
                  digitalWrite(7,HIGH);
                  if(V0>(min+(6*rng))){
                    digitalWrite(8,HIGH);
                    if(V0>(min+(7*rng))){
                      digitalWrite(9,HIGH);
                      if(V0>(min+(8*rng))){
                        digitalWrite(10,HIGH);
                        if(V0>(min+(9*rng))){
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

  
  
}