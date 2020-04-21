#define pinBtn 13

int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinBtn, INPUT_PULLUP);
}

void loop() {
  int _isPressed = digitalRead(pinBtn);

  Serial.println(_isPressed);

  if(_isPressed){
    count++;
    mouse(count);
    delay(95);
  } else {
    if(count > 0){
      Serial.println("release");
      count=0;
    }
  }

  delay(10);
}

void mouse(int n){
  switch(n){
    case 1:
      Serial.println("press");
      break;
    case 2:
      Serial.println("-2,19");
      break;
    case 3:
      Serial.println("1,27");
      break;
    case 4:
      Serial.println("2,27");
      break;
    case 5:
      Serial.println("4,26");
      break;
    case 6:
      Serial.println("5,27");
      break;
    case 7:
      Serial.println("5,27");
      break;
    case 8:
      Serial.println("2,29");
      break;
    case 9:
      Serial.println("-10,29");
      break;
    case 10:
      Serial.println("-20,10");
      break;
    case 11:
      Serial.println("-15,3");
      break;
    case 12:
      Serial.println("-10,4");
      break;  
    case 13:
      Serial.println("-6,2");
      break;
    case 14:
      Serial.println("4,2");
      break;
    case 15:
      Serial.println("14,3");
      break;
    case 16:
      Serial.println("20,3");
      break;
    case 17:
      Serial.println("20,3");
      break;
    case 18:
      Serial.println("19,2");
      break;
    case 19:
      Serial.println("12,-2");
      break;
    case 20:
      Serial.println("2,-2");
      break;
    case 21:
      Serial.println("-2,2");
      break;
    case 22:
      Serial.println("-2,4");
      break;
    case 23:
      Serial.println("3,2");
      break;
    case 24:
      Serial.println("3,2");
      break;
    case 25:
      Serial.println("-3,0");
      break;
    case 26:
      Serial.println("-15,-2");
      break;
    case 27:
      Serial.println("-44,-5");
      break;
    case 28:
      Serial.println("-28,-7");
      break;
    case 29:
      Serial.println("-29,-8");
      break;
    case 30:
      count=0;
      Serial.println("release");
      break;
  }
}
