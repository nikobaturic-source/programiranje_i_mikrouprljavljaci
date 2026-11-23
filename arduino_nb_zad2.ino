unsigned long otpornik0hm = 100000;
float C = 47e-6;
float R = 100000.0;
float tau;
float vrijemePunjenja;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
tau = R * C;
Serial.print("Tau: "); Serial.println(tau,3);
vrijemePunjenja = 5 * tau;
Serial.print("Vrijeme punjenja: ");
Serial.print(vrijemePunjenja,2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
