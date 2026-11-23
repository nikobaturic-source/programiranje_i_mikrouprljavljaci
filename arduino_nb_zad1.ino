unsigned int napon_mV = 3750;
unsigned int kapacitet_mAh = 2600;
float napon_V;
float kapacitet_Ah

void setup() {
Serial.begin(9600);
napon_V = napon_mV / 1000;

Serial.print("Napon u V: ");
Serial.print(napon_V);
Serila.prin("kapacitet u Ah : ");
Serial.print(kapacitet_Ah);
}

void loop() {
  // put your main code here, to run repeatedly:

}
