#include<Arduino.h>
#include<WiFi.h>

#define WIFI_NETWORK "ok"
#define WIFI_PASSWORD "12345678"
#define WIFI_TIMEOUT_MS 20000

void connectToWiFi(){
    Serial.println("Connecting to WiFi");
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_NETWORK,WIFI_PASSWORD);
    
    unsigned long startAttemptTime = millis();

    while(WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < WIFI_TIMEOUT_MS ){
        Serial.print(".");
        delay(100);
    }

    if(WiFi.status() == WL_CONNECTED){
        Serial.println("Connected!");
        delay(100);
        Serial.println(WiFi.localIP());
        delay(100);
    }
    else{
        Serial.println("Failed!");
        delay(100);
    }
}

void setup(){
    Serial.begin(115200);
    connectToWiFi();
}

void loop(){
    
}