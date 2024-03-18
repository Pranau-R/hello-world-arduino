void setup()
    {
    // Initialize serial communication at 9600 baud rate
    Serial.begin(9600);
    }

void loop()
    {
    // Print "Hello, World!" to the serial monitor
    Serial.println("Hello, World!");
    Serial.println("This is demo sketch");
    // Wait for 1 second
    delay(1000);
    }