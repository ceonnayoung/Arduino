unsigned long t1 = 0; //task1에 대한 변수
unsigned long t2 = 0; //task2에 대한 변수
unsigned long t3 = 0; //버튼을 눌렀다가 뗀

int btn_cnt = 0;
int long_btn_cnt = 0; 

bool old_btn = HIGH;


void setup() {
  Serial.begin(115200);
  pinMode(16,OUTPUT); //출력으로 설정
  
}


void loop() {
  //버튼이 눌러진 횟수를 업카운트하고 싶다
  bool now_btn = digitalRead(17);


  //엣지검출(하강)
  if(old_btn == HIGH && now_btn == LOW) {
    //엣지검출(하강)
    
  }else if(old_btn == LOW && now_btn == HIGH) {
    //상승엣지
    //Serial.print("버튼을 눌렀다가 뗀시간=");
    //Serial.println(millis() - t3);
    if(millis() - t3 > 50) {
      //내가 버튼을 눌렀다고 인정할 수 있는 부분
      long_btn_cnt++;
    }else if(millis() - t3 >50){
      btn_cnt++;
    }
  }
  
  old_btn = now_btn; //n번째 값을 n-1에게 전달
  
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
    Serial.println("현재 long_btn카운터=");
    Serial.println(long_btn_cnt);
  }

  
  /*
  digitalWrite(16,HIGH);
  delay(1000);
  digitalWrite(16, LOW);
  delay(1000);
  */
}
