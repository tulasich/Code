//heartrate sensor, temperature sensor Google sheets

#include <Arduino.h>
#include "DFRobot_Heartrate.h"
#include "esp_adc_cal.h"
#include <SimpleTimer.h>   //including the library of SimpleTimer

#define LM35 35
#define heartratePin 32

int LM35_Raw = 0;
float LM35_tempC = 0.0;
float LM35_tempF = 0.0;
float Voltage = 0.0;

DFRobot_Heartrate heartrate(DIGITAL_MODE); 
SimpleTimer timer;
uint8_t rateValue;
uint32_t readADC_Cal(int ADC_Raw)
{
  esp_adc_cal_characteristics_t adc_chars;
  
  esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 1100, &adc_chars);
  return(esp_adc_cal_raw_to_voltage(ADC_Raw, &adc_chars));
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
    delay(20);
  // put your main code here, to run repeatedly:
    LM35_Raw = analogRead(LM35);
    Voltage = readADC_Cal(LM35_Raw);
    LM35_tempC = (Voltage)/10;
    LM35_tempF = (LM35_tempC*1.8) + 32;

    Serial.print("Temperature: ");
    Serial.print(LM35_tempC);
    Serial.print(" °C");
    Serial.print(" / ");
    Serial.print(LM35_tempF);
    Serial.println(" °F");

    uint8_t rateValue;
    if(heartratePin){
        rateValue=heartrate.getValue(heartratePin); 
        Serial.print("Heartrate: ");
        Serial.println(rateValue);
    }
  
    delay(1000);

}