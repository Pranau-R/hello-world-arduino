void setup()
    {
    // Initialize serial communication at 9600 baud rate
    Serial.begin(9600);
    }

void loop()
    {
    // Print "Hello, World!" to the serial monitor
    Serial.println("Hello, World!");
    // Wait for 1 second
    delay(1000);
    }