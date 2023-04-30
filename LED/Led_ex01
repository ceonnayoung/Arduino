unsigned long t1 = 0; //task1에 대한 변수
unsigned long t2 = 0; //task2에 대한 변수
unsigned long t3 = 0; //task2에 대한 변수

int btn_cnt = 0;
//bool old_btn = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(16,OUTPUT); //출력으로 설정
  
}


void loop() {
  //버튼이 눌러진 횟수를 업카운트하고 싶다
  if (digitalRead(17) == LOW) {
    delay(200);
    //버튼이 눌려진것이다
    btn_cnt++;
  }
  
  //LED를 1초간격으로 토글시킨다(task1)
  if(millis() - t1 > 1000) {
    t1 = millis();
    //토글한다
  bool state = digitalRead(16);
  digitalWrite(16, !state);
  }

  //5초간격으로 시리얼모니터에 출력한다(task2)
  if(millis() - t2 > 1000) {
    t2 = millis();
    Serial.println("현재 btn카운터=");
    Serial.println(btn_cnt);
  }
}
