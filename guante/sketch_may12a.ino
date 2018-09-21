int flex1 = A0;
int flex2 = A4;

int ejex = A3;
int ejey = A2;
int ejez = A1;


void setup(){
  pinMode(2,INPUT);
  pinMode(6,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

String cad;
void loop(){
  if(digitalRead(2)== HIGH){
    cad = cad +"1";
  }
  else{cad = cad +"0";}
  if(digitalRead(6)== HIGH){
    cad = cad +"1";
  }else{ cad = cad +"0";}
  if(digitalRead(4)== HIGH){
    cad = cad +"1";
  }else{ cad = cad +"0";}
  if(analogRead(flex1) > 7){//listo
    cad = cad +"1";
  }else{ cad = cad +"0";}
  if(analogRead(flex2) > 7){
    cad = cad +"1";
  }else{ cad = cad +"0";}
  int data = analogRead(ejex);//listo
  if(data > 335){ //335
    cad = cad+"IZQUIERDA";  
  }
  else{
      if(data < 300){ //300
          cad = cad+"DERECHA"; 
       }else{
          cad = cad+"0";  
       }  
  }

  Serial.print(cad+".");
  cad ="";
}
