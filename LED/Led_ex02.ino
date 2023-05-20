void setup() {
  

}

void loop() {
  analogWrite(12,255); //빨간색을 최대밝기로 켜라!
  analogWrite(13,0); 
  analogWrite(14,0); 
  delay(1000);
  //녹색
  analogWrite(12,0); 
  analogWrite(13,255); 
  analogWrite(14,0); 
  delay(1000);
  //파란색
  analogWrite(12,0); 
  analogWrite(13,0); 
  analogWrite(14,255); 
  delay(1000);

}
