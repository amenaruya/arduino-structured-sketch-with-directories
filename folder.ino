#include "ModulesMap.hpp"

void setup() {
    Serial.begin(115200);
    while (!Serial);
    Serial.println(Module1::FModule1());
    Serial.println(Module2::FModule2());
}

void loop() {}
