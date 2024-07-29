#define in1 5 // L298n Motor Driver pins.
#define in2 6
#define in3 10
#define in4 11
#define LED_PIN 7 // Pin for the LED (change to your desired pin number).

int command; // Int to store app command state.
int Speed = 204; // 0 - 255.
int Speedsec;
int Turnradius = 0; // Set the radius of a turn, 0 - 255 Note: the robot will malfunction if this is higher than int Speed.
int brkonoff = 1; // 1 for the electronic braking system, 0 for normal.

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(LED_PIN, OUTPUT); // Initialize LED pin as output.
  Serial.begin(9600);  // Set the baud rate to your Bluetooth module.
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Stop(); // Initialize with motors stopped.
    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
      case 'G':
        forwardleft();
        break;
      case 'I':
        forwardright();
        break;
      case 'H':
        backleft();
        break;
      case 'J':
        backright();
        break;
      case '0':
        Speed = 100;
        break;
      case '1':
        Speed = 140;
        break;
      case '2':
        Speed = 153;
        break;
      case '3':
        Speed = 165;
        break;
      case '4':
        Speed = 178;
        break;
      case '5':
        Speed = 191;
        break;
      case '6':
        Speed = 204;
        break;
      case '7':
        Speed = 216;
        break;
      case '8':
        Speed = 229;
        break;
      case '9':
        Speed = 242;
        break;
      case 'q':
        Speed = 255;
        break;
      case 'W': // New command for turning on the headlight (replace with desired key).
        turnOnHeadlight();
        break;
    }
    Speedsec = Turnradius;
    if (brkonoff == 1) {
      brakeOn();
    } else {
      brakeOff();
    }
  }
}

void forward() {
  analogWrite(in3, Speed);
  analogWrite(in2, Speed);
}

void back() {
  analogWrite(in4, Speed);
  analogWrite(in1, Speed);
}

void left() {
  analogWrite(in2, Speed);
  analogWrite(in4, Speed);
}

void right() {
  analogWrite(in1, Speed);
  analogWrite(in3, Speed);
}

void forwardleft() {
  analogWrite(in1, Speedsec);
  analogWrite(in3, Speed);
}

void forwardright() {
  analogWrite(in1, Speed);
  analogWrite(in3, Speedsec);
}

void backright() {
  analogWrite(in2, Speed);
  analogWrite(in4, Speedsec);
}

void backleft() {
  analogWrite(in2, Speedsec);
  analogWrite(in4, Speed);
}

void Stop() {
  analogWrite(in1, 0);
  analogWrite(in2, 0);
  analogWrite(in3, 0);
  analogWrite(in4, 0);
}

void brakeOn() {
  // Implement electronic braking system here if needed.
}

void brakeOff() {
  // Implement electronic braking system here if needed.
}

void turnOnHeadlight() {
  digitalWrite(LED_PIN, HIGH); // Turn on the LED.
}

