# 📡 CC1101 with Arduino: 433 MHz Signal Interference

This repository provides a practical guide and working example for interfacing the CC1101 RF transceiver module with an Arduino Nano or UNO. It includes wiring instructions, setup guidance, and a script to generate broad interference across the 433 MHz ISM band — commonly used by key fobs, garage doors, and basic wireless sensors.

⚠️ Educational Use Only: This project is for learning about wireless communication and interference. Use responsibly and in accordance with local laws.

# 🔧 Introduction cc1101

The CC1101 is a low-cost transceiver module operating in the sub-1 GHz spectrum. In this example, we configure the CC1101 to:

Transmit continuously at 433 MHz
Sweep nearby frequencies by hopping in small increments
Output at maximum power
This disrupts basic 433 MHz signals by saturating the airwaves, making communication difficult for nearby devices.

# 📡 Hardware Used

Arduino Nano or Arduino UNO

CC1101 module (433 MHz version)

Jumper wires

Optional: 10µF capacitor between VCC and GND

# 🔌 Wiring Diagram

| CC1101 Pin | Arduino Nano / UNO Pin |
|------------|------------------------|
| VCC        | 3.3V                   |
| GND        | GND                    |
| MOSI       | D11                    |
| SCK        | D13                    |
| CSN (SS)   | D10                    |
| GDO2       | D12                    |



## 🚀 Getting Started

### 🧰 Hardware Requirements
- Arduino UNO or Nano (or any compatible board)
- **CC1101 433 MHz transceiver module**
- Breadboard and jumper wires
- Capacitor (10 µF) to stabilize power (optional but recommended)

---

### 💻 Software Requirements
- [Arduino IDE](https://www.arduino.cc/en/software)
- **ELECHOUSE_CC1101** library  
  → [ELECHOUSE/CC1101_SRC_DRV](https://github.com/ELECHOUSE/CC1101)

---

### 🛠 Installation Steps

1. **Connect the CC1101 module to your Arduino** using the wiring diagram provided.
2. **Install the ELECHOUSE CC1101 library**:
   - Open the **Arduino IDE**
   - Go to **Sketch > Include Library > Manage Libraries...**
   - Search for `"ELECHOUSE_CC1101"` and install **`ELECHOUSE_CC1101_SRC_DRV`** by ELECHOUSE

