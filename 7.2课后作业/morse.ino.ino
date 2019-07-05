char ch_get = '?';

String out = "";
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()>0){
      ch_get = Serial.read(); 
      }else{
        Serial.print(out);
        
        }
    if(ch_get==' ' || ch_get=='\n'){
      out += " /";
      }
    else{
      switch(ch_get){
        case 'a':out += "*-"; break; 
        case 'b':out += "-***";  break;
        case 'c':out += "-*-*";   break;
        case 'd':out += "-**";  break;
        case 'e':out += "*";break;
        case 'f':out += "**-*";  break;
        case 'g':out += "--*";break;
        case 'h':out += "****";break;
        case 'i':out += "**";   break;
        case 'j':out += "*---";break;
        case 'k':out += "-*-";break;
        case 'l':out += "*-**";   break;
        case 'm':out += "--";break;
        case 'n':out += "-*";break;
        case 'o':out += "---";break;
        case 'p':out += "*--*";break;
        case 'q':out += "--*-";break;
        case 'r':out += "*-*";break;
        case 's':out += "***";  break;
        case 't':out += "-";  break;
        case 'u':out += "**-";break;
        case 'v':out += "***-";  break;
        case 'w':out += "*--";break;
        case 'x':out += "-**-";break;
        case 'y':out += "-*--";break;
        case 'z':out += "--**";  break;

        }
      } 
}
