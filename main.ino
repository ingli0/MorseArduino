#define led_pin 8

void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  String inputText = readInputText();
  convertAndDisplayMorseCode(inputText);
}

String readInputText() {
  String inputText = "";
  
  while (Serial.available()) {
    char c = Serial.read();
    inputText += c;
  }
  
  return inputText;
}

void convertAndDisplayMorseCode(String text) {
  for (int i = 0; i < text.length(); i++) {
    char c = toLowerCase(text[i]);
    
    switch (c) {
      case 'a':
        morseDot();
        morseDash();
        break;
      case 'b':
        morseDash();
        morseDot();
        morseDot();
        morseDot();
        break;
      case 'c':
        morseDash();
        morseDot();
        morseDash();
        morseDot();
        break;
      case 'd':
        morseDash();
        morseDot();
        morseDot();
        break;
      case 'e':
        morseDot();
        break;
      case 'f':
        morseDot();
        morseDot();
        morseDash();
        morseDot();
        break;
      case 'g':
        morseDash();
        morseDash();
        morseDot();
        break;
      case 'h':
        morseDot();
        morseDot();
        morseDot();
        morseDot();
        break;
      case 'i':
        morseDot();
        morseDot();
        break;
      case 'j':
        morseDot();
        morseDash();
        morseDash();
        morseDash();
        break;
      case 'k':
        morseDash();
        morseDot();
        morseDash();
        break;
      case 'l':
        morseDot();
        morseDash();
        morseDot();
        morseDot();
        break;
      case 'm':
        morseDash();
        morseDash();
        break;
      case 'n':
        morseDash();
        morseDot();
        break;
      case 'o':
        morseDash();
        morseDash();
        morseDash();
        break;
      case 'p':
        morseDot();
        morseDash();
        morseDash();
        morseDot();
        break;
      case 'q':
        morseDash();
        morseDash();
        morseDot();
        morseDash();
        break;
      case 'r':
        morseDot();
        morseDash();
        morseDot();
        break;
      case 's':
        morseDot();
        morseDot();
        morseDot();
        break;
      case 't':
        morseDash();
        break;
      case 'u':
        morseDot();
        morseDot();
        morseDash();
        break;
      case 'v':
        morseDot();
        morseDot();
        morseDot();
        morseDash();
        break;
      case 'w':
        morseDot();
        morseDash();
        morseDash();
        break;
      case 'x':
        morseDash();
        morseDot();
        morseDot();
        morseDash();
        break;
      case 'y':
        morseDash();
        morseDot();
        morseDash();
        morseDash();
        break;
      case 'z':
        morseDash();
        morseDash();
        morseDot();
        morseDot();
        break;
      case ' ':
        delay(300); // Space between words
        break;
    }
    
    if (i < text.length() - 1) {
      delay(100); // Space between characters
    }
  }
}

void morseDot() {
  digitalWrite(led_pin, HIGH);
  delay(200);
  digitalWrite(led_pin, LOW);
  delay(200);
}

void morseDash() {
  digitalWrite(led_pin, HIGH);
  delay(600);
  digitalWrite(led_pin, LOW);
  delay(200);
}
