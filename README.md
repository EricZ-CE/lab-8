# lab-8

## Task 1: Continuity Detector
- Connect the probes to D12 and GND.
- Connect an LED with a current-limiting resistor to D8.
- The LED turns on when continuity exists and off otherwise.
- Test only unpowered connections.

## Task 2: DC Voltmeter
- Connect the positive probe to A0 and the negative probe to A1.
- Connect the LCD to 5V, GND, A4 (SDA), and A5 (SCL).
- LCD address: `0x27`.
- Voltage readings update every 500 ms.
- Keep both analog inputs within 0–5 V relative to Arduino GND.

## Setup
1. Install the `LiquidCrystal_I2C` library in Arduino IDE.
2. Open each program as a separate sketch.
3. Select Arduino Uno and the correct port.
4. Upload the sketch.
