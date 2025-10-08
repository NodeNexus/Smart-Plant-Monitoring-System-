# 🌱 Smart Plant Monitoring System

An IoT-based system that monitors soil moisture, temperature, and humidity in real time.  
It automatically turns on a water pump when soil gets dry, helping maintain healthy plant growth with minimal manual effort.

---

## ⚙️ Components Used
| Component | Quantity | Description |
|------------|-----------|-------------|
| ESP32 / NodeMCU | 1 | Microcontroller board with WiFi |
| DHT11 Sensor | 1 | Measures temperature and humidity |
| Soil Moisture Sensor | 1 | Detects soil dryness |
| 5V Relay Module | 1 | Controls the water pump |
| Mini Water Pump | 1 | Used for irrigation |

---

## 🧠 Working Principle
- The soil moisture sensor continuously checks soil wetness.  
- DHT11 measures the environment’s temperature and humidity.  
- If soil moisture drops below a certain level, the ESP32 activates the relay, turning on the pump.  
- Once sufficient moisture is detected, it automatically switches the pump off.

---

## 🔌 Circuit Connections
| ESP32 Pin | Connected To |
|------------|--------------|
| D4 | DHT11 Data |
| D34 | Soil Moisture Sensor Analog |
| D25 | Relay IN |
| 5V, GND | Power Supply |

---

## 💻 Usage
1. Open `main.ino` in Arduino IDE.  
2. Select **ESP32 Dev Module** from Tools → Board.  
3. Update your WiFi credentials in the code.  
4. Upload and monitor output via Serial Monitor.

---

## 🧩 Features
- Automatic irrigation  
- Real-time soil & climate readings  
- Low-power and low-cost system  
- Scalable for multiple plants

---

## 🔮 Future Improvements
- Add IoT dashboard (ThingSpeak/Blynk)  
- Include sunlight detection with LDR  
- Send notifications via Telegram or email

---

**Developer — NodeNexus (Vaishnav Balpande)**
