#define LED1 D1
#define LED2 D2
#define LED3 D3

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void fadeEffect(int led) {
    for (int i = 0; i <= 255; i += 5) {
        analogWrite(led, i);
        delay(5);
    }
    for (int i = 255; i >= 0; i -= 5) {
        analogWrite(led, i);
        delay(5);
    }
}

void waveEffect() {
    for (int i = 0; i < 3; i++) {
        digitalWrite(LED1, i == 0 ? HIGH : LOW);
        digitalWrite(LED2, i == 1 ? HIGH : LOW);
        digitalWrite(LED3, i == 2 ? HIGH : LOW);
        delay(150);
    }
}

void lightningFlash() {
    for (int i = 0; i < 5; i++) {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        delay(random(50, 200));
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        delay(random(50, 200));
    }
}

void strobeEffect() {
    for (int i = 0; i < 10; i++) {
        digitalWrite(LED1, HIGH);
        delay(30);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        delay(30);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, HIGH);
        delay(30);
        digitalWrite(LED3, LOW);
    }
}

void sparkleEffect() {
    for (int i = 0; i < 20; i++) {
        digitalWrite(LED1, random(2));
        digitalWrite(LED2, random(2));
        digitalWrite(LED3, random(2));
        delay(random(50, 300));
    }
}

void loop() {
    waveEffect();
    fadeEffect(LED1);
    fadeEffect(LED2);
    fadeEffect(LED3);
    lightningFlash();
    strobeEffect();
    sparkleEffect();
}
