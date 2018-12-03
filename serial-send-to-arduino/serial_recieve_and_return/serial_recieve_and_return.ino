char recieveByte = 0;  // 受信データ用

void setup() {
  Serial.begin(9600);
}

void loop() {
  //arduino側で受信できているか直接確認することができない(arduinoIDEのシリアルモニタと、実行ファイルからの同時アクセスはできない)ため、受信データを送り返すことで確認する。
  //同時起動してしまい、正しく動作しなくなったときは、もう一度「マイコンボードのに書き込む」を行うと改善する
  while (Serial.available() > 0) { // 受信したデータが存在する
    recieveByte = Serial.read(); // 受信データを読み込む
    Serial.print("I received: "); // 受信データを送りかえす
    Serial.println(recieveByte);
  }
  delay(100);
}
