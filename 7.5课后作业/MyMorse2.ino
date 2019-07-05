#include <string.h>
char c;
String s;
void setup() {
    Serial.begin(9600);
    pinMode(2, OUTPUT);
}
void loop() {
    if(Serial.available()>0){
      c = Serial.read(); 
      if(c==' ' || c=='\n'){
      s += "/???";
      }
          else{
             switch(c){
        case 'a':s = "*-??"; 
               break; 
        case 'b':s = "-***";  
               break;
        case 'c':s = "-*-*";   
               break;
        case 'd':s = "-**?";  
               break;
        case 'e':s = "*???";
               break;
        case 'f':s = "**-*";  
               break;
        case 'g':s = "--*?";
               break;
        case 'h':s = "****";
               break;
        case 'i':s = "**??";   
               break;
        case 'j':s = "*---";
               break;
        case 'k':s = "-*-?";
               break;
        case 'l':s = "*-**";   
               break;
        case 'm':s = "--??";
               break;
        case 'n':s = "-*??";
               break;
        case 'o':s = "---?";
               break;
        case 'p':s = "*--*";
               break;
        case 'q':s = "--*-";
               break;
        case 'r':s = "*-*?";
               break;
        case 's':s = "***?";  
               break;
        case 't':s = "-???";  
               break;
        case 'u':s = "**-?";
               break;
        case 'v':s = "***-";  
               break;
        case 'w':s = "*--?";
               break;
        case 'x':s = "-**-";
               break;
        case 'y':s = "-*--";
               break;
        case 'z':s = "--**";  
               break;
        }        
    }
      for(int i=0;i<4;i++){
          if(s[i] == '*'){
              on(1);
              off(1);
          }else if(s[i] == '-'){
              on(3);
              off(1);
          }else if(s[i] == '/'){
              off(4);
          } 
      }
      off(2);
      s = "";
      }
}  
void on(int time){
    int time1 = 500;
    digitalWrite(2, HIGH);
    delay(time * time1);
}

void off(int time){
    int time1 = 500;
    digitalWrite(2, LOW);
    delay(time * time1);
}