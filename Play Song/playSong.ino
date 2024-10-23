// C++ code
//

// Define the piezo buzzer pin
int piezoPin = 8;

// Define the melody (frequencies in Hertz)
int melody[] = {
  392, 392, 440, 392, 523, 494,   // G4 G4 A4 G4 C5 B4
  392, 392, 440, 392, 587, 523,   // G4 G4 A4 G4 D5 C5
  392, 392, 784, 659, 523, 494, 440,  // G4 G4 G5 E5 C5 B4 A4
  698, 698, 659, 523, 587, 523    // F5 F5 E5 C5 D5 C5
};

// Define the note durations (4 = quarter note, 8 = eighth note, etc.)
int noteDurations[] = {
  4, 4, 4, 4, 4, 4,  // First phrase
  4, 4, 4, 4, 4, 4,  // Second phrase
  4, 4, 4, 4, 4, 4, 4,  // Third phrase
  4, 4, 4, 4, 4, 4   // Fourth phrase
};

void setup() {
  // Nothing to set up in this case
}

void loop() {
  // Play each note in the melody
  for (int i = 0; i < 25; i++) {
    int noteDuration = 1000 / noteDurations[i]; // Calculate the note duration
    tone(piezoPin, melody[i], noteDuration);    // Play the note
    delay(noteDuration * 1.3);                 // Pause between notes
  }
  delay(2000);  // Wait 2 seconds before repeating the melody
}
