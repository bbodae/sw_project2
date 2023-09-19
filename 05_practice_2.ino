#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  
  Serial.println("Hello World!");
  count = toggle = 0;
  
}

void loop() {
  
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  
  Serial.println(++count);
  for (int i = 0; i<10; ) {
    i = i + 1 ;
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay (100);
  }
  while (1) {
    digitalWrite(PIN_LED, 1);
  }

}

unsigned int toggle_state(unsigned int toggle) {
  toggle = ++toggle ;
  return toggle%2 ;
}
