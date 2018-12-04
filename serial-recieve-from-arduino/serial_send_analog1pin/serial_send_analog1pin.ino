void setup() {
  Serial.begin(9600);
}

void loop() {
  //アナログピン1の値を送信する
  int A1 = analogRead(1);
  Serial.print("Vlue of analog pin1=");//文字列は1文字ずつASCIIコードに変換されて送られる
  Serial.print(A1,DEC);//intも1文字ずつASCIIコードに変換されて送られる
  Serial.println("");//改行
  delay(100);
}
