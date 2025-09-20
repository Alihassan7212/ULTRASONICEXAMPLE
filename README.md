# Arduino Distance Measurement with HC-SR04

This project demonstrates how to measure distance using an **HC-SR04 Ultrasonic Sensor** and an **Arduino board**. The measured distance is printed on the **Serial Monitor**.

---

## 📌 Features
- Uses **HC-SR04 Ultrasonic Sensor** to measure distance in centimeters.
- Outputs the readings directly to the **Arduino Serial Monitor**.
- Beginner-friendly and easy to extend (e.g., for obstacle detection, robotics, IoT).

---

## 🛠️ Components Required
- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Jumper wires
- Breadboard (optional)

---

## 🔌 Circuit Diagram
| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| TRIG        | 9           |
| ECHO        | 10          |

> You can change the `trigPin` and `echoPin` in the code if you wire them differently.

---

## 📜 Code Explanation
1. **Trigger Pin** sends a 10 µs HIGH pulse.
2. The sensor emits an ultrasonic wave.
3. **Echo Pin** receives the reflected signal.
4. The Arduino measures the duration of the pulse using `pulseIn()`.
5. Distance is calculated using:
