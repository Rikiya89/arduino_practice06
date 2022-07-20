
// 可変抵抗のピン番号
int VRES = 0;
// 可変抵抗の値
int vresVal = 0;

void setup() {
	// シリアル通信の開始
	Serial.begin(9600);
}

void loop() {
	// アナログ値でデータを取得
	vresVal = analogRead(VRES);

	// シリアルモニターで確認
	Serial.print(vresVal);
	Serial.println();

	// 適度な間隔を開ける
	delay(200);
}