# 📡 CC1101 with Arduino: 433 MHz Signal Interference

This repository provides a practical guide and working example for interfacing the CC1101 RF transceiver module with an Arduino Nano or UNO. It includes wiring instructions, setup guidance, and a script to generate broad interference across the 433 MHz ISM band — commonly used by key fobs, garage doors, and basic wireless sensors.

⚠️ Educational Use Only: This project is for learning about wireless communication and interference. Use responsibly and in accordance with local laws.

# 🔧 cc1101 

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

