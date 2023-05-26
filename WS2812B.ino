#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 560
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int a,s,d,f,g,h,j,k,l;

void setup() {
strip.begin();
strip.show(); 
}


void loop() {
for (int i = 0; i < strip.numPixels(); i++) {
strip.setPixelColor(i, strip.Color(255, 255, 255));

a = i - 30;
strip.setPixelColor(a, strip.Color(0, 0, 0));

s = i - 60;
strip.setPixelColor(s, strip.Color(255, 255, 255));

d = i - 90;
strip.setPixelColor(d, strip.Color(0, 0, 0));

f = i - 120;
strip.setPixelColor(f, strip.Color(255, 255, 255));

g = i - 150;
strip.setPixelColor(g, strip.Color(0, 0, 0));

h = i - 180;
strip.setPixelColor(h, strip.Color(255, 255, 255));

j = i - 210;
strip.setPixelColor(j, strip.Color(0, 0, 0));

k = i - 240;
strip.setPixelColor(k, strip.Color(255, 255, 255));

l = i - 270;
strip.setPixelColor(l, strip.Color(0, 0, 0));


strip.show();
strip.setBrightness(250);
delay(10);
}}


