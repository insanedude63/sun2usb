static byte keyStack[6];
//TODO handle stack overflow
byte addToKeyStack( char key ){
  for( int i = 0; i < 6; i++ ){
    if( keyStack[i] == 0 ){
      keyStack[i] = key;
      return 1;
    }
  }
  return 0;
}
//TODO handle mismatched character
byte dropFromKeyStack( char key ){
  for( int i = 0; i < 6; i++ ){
    if( keyStack[i] == key ){
      keyStack[i] = 0;
      return 1;
    }
  }
  return 0;
}
//TODO add keyboard beeper test code
//TODO add keyboard beeper code to respond to exceptions
void setup(){
  SerialUSB.begin( 9600 );
  while( !SerialUSB );
  Serial1.begin( 1200 );
}

void loop(){
  while( Serial1.available() > 0 ){
    byte in = Serial1.read();
    static byte mod = 0;
    SerialUSB.println( in );
    switch( in ){
      case 5:
        addToKeyStack( KEY_F1 );
        break;
      case 133:
        dropFromKeyStack( KEY_F1 );
        break;
      case 6:
        addToKeyStack( KEY_F2 );
        break;
      case 134:
        dropFromKeyStack( KEY_F2 );
        break;
      case 8:
        addToKeyStack( KEY_F3 );
        break;
      case 136:
        dropFromKeyStack( KEY_F3 );
        break;
      case 10:
        addToKeyStack( KEY_F4 );
        break;
      case 138:
        dropFromKeyStack( KEY_F4 );
        break;
      case 12:
        addToKeyStack( KEY_F5 );
        break;
      case 140:
        dropFromKeyStack( KEY_F5 );
        break;
      case 14:
        addToKeyStack( KEY_F6 );
        break;
      case 142:
        dropFromKeyStack( KEY_F6 );
        break;
      case 16:
        addToKeyStack( KEY_F7 );
        break;
      case 144:
        dropFromKeyStack( KEY_F7 );
        break;
      case 17:
        addToKeyStack( KEY_F8 );
        break;
      case 145:
        dropFromKeyStack( KEY_F8 );
        break;
      case 18:
        addToKeyStack( KEY_F9 );
        break;
      case 146:
        dropFromKeyStack( KEY_F9 );
        break;
      case 7:
        addToKeyStack( KEY_F10 );
        break;
      case 135:
        dropFromKeyStack( KEY_F10 );
        break;
      case 9:
        addToKeyStack( KEY_F11 );
        break;
      case 137:
        dropFromKeyStack( KEY_F11 );
        break;
      case 11:
        addToKeyStack( KEY_F12 );
        break;
      case 139:
        dropFromKeyStack( KEY_F12 );
        break;
      case 88:
        addToKeyStack( KEY_BACKSLASH );
        break;
      case 216:
        dropFromKeyStack( KEY_BACKSLASH );
        break;
      case 66:
        addToKeyStack( KEY_DELETE );
        break;
      case 194:
        dropFromKeyStack( KEY_DELETE );
        break;
      /*case 1:
        addToKeyStack( KEY_F1 ); STOP key
        break;
      case 129:
        dropFromKeyStack( KEY_F1 ); STOP Key
        break;
      case 3:
        addToKeyStack( KEY_F1 ); AGAIN Key
        break;
      case 131:
        dropFromKeyStack( KEY_F1 ); AGAIN Key
        break; */
      case 21:
        addToKeyStack( KEY_PAUSE );
        break;
      case 149:
        dropFromKeyStack( KEY_PAUSE );
        break;
      case 22:
        addToKeyStack( KEY_PRINTSCREEN );
        break;
      case 150:
        dropFromKeyStack( KEY_PRINTSCREEN );
        break;
      case 23:
        addToKeyStack( KEY_SCROLL_LOCK );
        break;
      case 151:
        dropFromKeyStack( KEY_SCROLL_LOCK );
        break;
      case 98:
        addToKeyStack( KEY_NUM_LOCK );
        break;
      case 226:
        dropFromKeyStack( KEY_NUM_LOCK );
        break;
      /*case 25:
        addToKeyStack( KEY_F1 ); PROPS Key
        break;
      case 153:
        dropFromKeyStack( KEY_F1 ); PROPS Key
        break;
      case 26:
        addToKeyStack( KEY_F1 ); UNDO Key
        break;
      case 154:
        dropFromKeyStack( KEY_F1 ); UNDO Key
        break; */
      case 29:
        addToKeyStack( KEY_ESC );
        break;
      case 157:
        dropFromKeyStack( KEY_ESC );
        break;
      case 30:
        addToKeyStack( KEY_1 );
        break;
      case 158:
        dropFromKeyStack( KEY_1 );
        break;
      case 31:
        addToKeyStack( KEY_2 );
        break;
      case 159:
        dropFromKeyStack( KEY_2 );
        break;
      case 32:
        addToKeyStack( KEY_3 );
        break;
      case 160:
        dropFromKeyStack( KEY_3 );
        break;
      case 33:
        addToKeyStack( KEY_4 );
        break;
      case 161:
        dropFromKeyStack( KEY_4 );
        break;
      case 34:
        addToKeyStack( KEY_5 );
        break;
      case 162:
        dropFromKeyStack( KEY_5 );
        break;
      case 35:
        addToKeyStack( KEY_6 );
        break;
      case 163:
        dropFromKeyStack( KEY_6 );
        break;
      case 36:
        addToKeyStack( KEY_7 );
        break;
      case 164:
        dropFromKeyStack( KEY_7 );
        break;
      case 37:
        addToKeyStack( KEY_8 );
        break;
      case 165:
        dropFromKeyStack( KEY_8 );
        break;
      case 38:
        addToKeyStack( KEY_9 );
        break;
      case 166:
        dropFromKeyStack( KEY_9 );
        break;
      case 39:
        addToKeyStack( KEY_0 );
        break;
      case 167:
        dropFromKeyStack( KEY_0 );
        break;
      case 40:
        addToKeyStack( KEY_MINUS );
        break;
      case 168:
        dropFromKeyStack( KEY_MINUS );
        break;
      case 41:
        addToKeyStack( KEY_EQUAL );
        break;
      case 169:
        dropFromKeyStack( KEY_EQUAL );
        break;
      case 43:
        addToKeyStack( KEY_BACKSPACE );
        break;
      case 171:
        dropFromKeyStack( KEY_BACKSPACE );
        break;
      case 45:
        addToKeyStack( KEY_EQUAL );
        break;
      case 173:
        dropFromKeyStack( KEY_EQUAL );
        break;
      case 46:
        addToKeyStack( KEYPAD_SLASH );
        break;
      case 174:
        dropFromKeyStack( KEYPAD_SLASH );
        break;
      case 47:
        addToKeyStack( KEYPAD_ASTERIX );
        break;
      case 175:
        dropFromKeyStack( KEYPAD_ASTERIX );
        break;
      case 71:
        addToKeyStack( KEYPAD_MINUS );
        break;
      case 199:
        dropFromKeyStack( KEYPAD_MINUS );
        break;
      /*case 49:
        addToKeyStack( KEY_F1 ); FRONT Key
        break;
      case 177:
        dropFromKeyStack( KEY_F1 ); FRONT Key
        break;
      case 51:
        addToKeyStack( KEY_F1 ); COPY Key
        break;
      case 179:
        dropFromKeyStack( KEY_F1 ); COPY Key
        break; */
      case 53:
        addToKeyStack( KEY_TAB );
        break;
      case 181:
        dropFromKeyStack( KEY_TAB );
        break;
      case 54:
        addToKeyStack( KEY_Q );
        break;
      case 182:
        dropFromKeyStack( KEY_Q );
        break;
      case 55:
        addToKeyStack( KEY_W );
        break;
      case 183:
        dropFromKeyStack( KEY_W );
        break;
      case 56:
        addToKeyStack( KEY_E );
        break;
      case 184:
        dropFromKeyStack( KEY_E );
        break;
      case 57:
        addToKeyStack( KEY_R );
        break;
      case 185:
        dropFromKeyStack( KEY_R );
        break;
      case 58:
        addToKeyStack( KEY_T );
        break;
      case 186:
        dropFromKeyStack( KEY_T );
        break;
      case 59:
        addToKeyStack( KEY_Y );
        break;
      case 187:
        dropFromKeyStack( KEY_Y );
        break;
      case 60:
        addToKeyStack( KEY_U );
        break;
      case 188:
        dropFromKeyStack( KEY_U );
        break;
      case 61:
        addToKeyStack( KEY_I );
        break;
      case 189:
        dropFromKeyStack( KEY_I );
        break;
      case 62:
        addToKeyStack( KEY_O );
        break;
      case 190:
        dropFromKeyStack( KEY_O );
        break;
      case 63:
        addToKeyStack( KEY_P );
        break;
      case 191:
        dropFromKeyStack( KEY_P );
        break;
      case 64:
        addToKeyStack( KEY_LEFT_BRACE );
        break;
      case 192:
        dropFromKeyStack( KEY_LEFT_BRACE );
        break;
      case 65:
        addToKeyStack( KEY_RIGHT_BRACE );
        break;
      case 193:
        dropFromKeyStack( KEY_RIGHT_BRACE );
        break;
      case 89:
        addToKeyStack( KEY_ENTER );
        break;
      case 217:
        dropFromKeyStack( KEY_ENTER );
        break;
      case 68:
        addToKeyStack( KEYPAD_7 );
        break;
      case 196:
        dropFromKeyStack( KEYPAD_7 );
        break;
      case 69:
        addToKeyStack( KEYPAD_8 );
        break;
      case 197:
        dropFromKeyStack( KEYPAD_8 );
        break;
      case 70:
        addToKeyStack( KEYPAD_9 );
        break;
      case 198:
        dropFromKeyStack( KEYPAD_9 );
        break;
      case 125:
        addToKeyStack( KEYPAD_PLUS );
        break;
      case 253:
        dropFromKeyStack( KEYPAD_PLUS );
        break;
      /*case 72:
        addToKeyStack( KEY_F1 ); OPEN Key
        break;
      case 200:
        dropFromKeyStack( KEY_F1 ); OPEN Key
        break;
      case 73:
        addToKeyStack( KEY_F1 ); PASTE Key
        break;
      case 201:
        dropFromKeyStack( KEY_F1 ); PASTE Key
        break; */
      case 76:
        mod |= MODIFIERKEY_CTRL;
        break;
      case 204:
        mod &= ~MODIFIERKEY_CTRL;
        break;
      case 77:
        addToKeyStack( KEY_A );
        break;
      case 205:
        dropFromKeyStack( KEY_A );
        break;
      case 78:
        addToKeyStack( KEY_S );
        break;
      case 206:
        dropFromKeyStack( KEY_S );
        break;
      case 79:
        addToKeyStack( KEY_D );
        break;
      case 207:
        dropFromKeyStack( KEY_D );
        break;
      case 80:
        addToKeyStack( KEY_F );
        break;
      case 208:
        dropFromKeyStack( KEY_F );
        break;
      case 81:
        addToKeyStack( KEY_G );
        break;
      case 209:
        dropFromKeyStack( KEY_G );
        break;
      case 82:
        addToKeyStack( KEY_H );
        break;
      case 210:
        dropFromKeyStack( KEY_H );
        break;
      case 83:
        addToKeyStack( KEY_J );
        break;
      case 211:
        dropFromKeyStack( KEY_J );
        break;
      case 84:
        addToKeyStack( KEY_K );
        break;
      case 212:
        dropFromKeyStack( KEY_K );
        break;
      case 85:
        addToKeyStack( KEY_L );
        break;
      case 213:
        dropFromKeyStack( KEY_L );
        break;
      case 86:
        addToKeyStack( KEY_SEMICOLON );
        break;
      case 214:
        dropFromKeyStack( KEY_SEMICOLON );
        break;
      case 87:
        addToKeyStack( KEY_QUOTE );
        break;
      case 215:
        dropFromKeyStack( KEY_QUOTE );
        break;
      case 42:
        addToKeyStack( KEY_TILDE );
        break;
      case 170:
        dropFromKeyStack( KEY_TILDE );
        break;
      case 91:
        addToKeyStack( KEYPAD_4 );
        break;
      case 219:
        dropFromKeyStack( KEYPAD_4 );
        break;
      case 92:
        addToKeyStack( KEYPAD_5 );
        break;
      case 220:
        dropFromKeyStack( KEYPAD_5 );
        break;
      case 93:
        addToKeyStack( KEYPAD_6 );
        break;
      case 221:
        dropFromKeyStack( KEYPAD_6 );
        break;
      /*case 95:
        addToKeyStack( KEY_F1 ); FIND Key
        break;
      case 223:
        dropFromKeyStack( KEY_F1 ); FIND Key
        break;
      case 96:
        addToKeyStack( KEY_F1 ); CUT Key
        break;
      case 224:
        dropFromKeyStack( KEY_F1 ); CUT Key
        break; */
      case 99:
        mod |= MODIFIERKEY_SHIFT;
        break;
      case 227:
        mod &= ~MODIFIERKEY_SHIFT;
        break;
      case 100:
        addToKeyStack( KEY_Z );
        break;
      case 228:
        dropFromKeyStack( KEY_Z );
        break;
      case 101:
        addToKeyStack( KEY_X );
        break;
      case 229:
        dropFromKeyStack( KEY_X );
        break;
      case 102:
        addToKeyStack( KEY_C );
        break;
      case 230:
        dropFromKeyStack( KEY_C );
        break;
      case 103:
        addToKeyStack( KEY_V );
        break;
      case 231:
        dropFromKeyStack( KEY_V );
        break;
      case 104:
        addToKeyStack( KEY_B );
        break;
      case 232:
        dropFromKeyStack( KEY_B );
        break;
      case 105:
        addToKeyStack( KEY_N );
        break;
      case 233:
        dropFromKeyStack( KEY_N );
        break;
      case 106:
        addToKeyStack( KEY_M );
        break;
      case 234:
        dropFromKeyStack( KEY_M );
        break;
      case 107:
        addToKeyStack( KEY_COMMA );
        break;
      case 235:
        dropFromKeyStack( KEY_COMMA );
        break;
      case 108:
        addToKeyStack( KEY_PERIOD );
        break;
      case 236:
        dropFromKeyStack( KEY_PERIOD );
        break;
      case 109:
        addToKeyStack( KEY_SLASH );
        break;
      case 237:
        dropFromKeyStack( KEY_SLASH );
        break;
      case 110:
        mod |= MODIFIERKEY_RIGHT_SHIFT;
        break;
      case 238:
        mod &= ~MODIFIERKEY_RIGHT_SHIFT;
        break;
      /*case 111:
        addToKeyStack( KEY_F1 ); LINE FEED Key
        break;
      case 239:
        dropFromKeyStack( KEY_F1 ); LINE FEED Key
        break; */
      case 112:
        addToKeyStack( KEYPAD_1 );
        break;
      case 240:
        dropFromKeyStack( KEYPAD_1 );
        break;
      case 113:
        addToKeyStack( KEYPAD_2 );
        break;
      case 241:
        dropFromKeyStack( KEYPAD_2 );
        break;
      case 114:
        addToKeyStack( KEYPAD_3 );
        break;
      case 242:
        dropFromKeyStack( KEYPAD_3 );
        break;
      case 90:
        addToKeyStack( KEYPAD_ENTER );
        break;
      case 218:
        dropFromKeyStack( KEYPAD_ENTER );
        break;
      /*case 118:
        addToKeyStack( KEY_F1 ); HELP Key
        break;
      case 246:
        dropFromKeyStack( KEY_F1 ); HELP Key
        break; */
      case 119:
        addToKeyStack( KEY_CAPS_LOCK );
        break;
      case 247:
        dropFromKeyStack( KEY_CAPS_LOCK );
        break;
      case 19:
        mod |= MODIFIERKEY_ALT;
        break;
      case 147:
        mod &= ~MODIFIERKEY_ALT;
        break;
      case 120:
        mod |= MODIFIERKEY_GUI;
        break;
      case 248:
        mod &= ~MODIFIERKEY_GUI;
        break;
      case 121:
        addToKeyStack( KEY_SPACE );
        break;
      case 249:
        dropFromKeyStack( KEY_SPACE );
        break;
      case 122:
        mod |= MODIFIERKEY_RIGHT_GUI;
        break;
      case 250:
        mod &= ~MODIFIERKEY_RIGHT_GUI;
        break;
      /*case 67:
        addToKeyStack( KEY_F1 ); COMPOSE Key
        break;
      case 195:
        dropFromKeyStack( KEY_F1 ); COMPOSE Key
        break; */
      case 13:
        mod |= MODIFIERKEY_RIGHT_ALT;
        break;
      case 141:
        mod &= ~MODIFIERKEY_RIGHT_ALT;
        break;
      case 94:
        addToKeyStack( KEYPAD_0 );
        break;
      case 222:
        dropFromKeyStack( KEYPAD_0 );
        break;
      case 50:
        addToKeyStack( KEYPAD_PERIOD );
        break;
      case 178:
        dropFromKeyStack( KEYPAD_PERIOD );
        break;
    }
    Keyboard.set_modifier( mod );
    Keyboard.set_key1( keyStack[0] );
    Keyboard.set_key2( keyStack[1] );
    Keyboard.set_key3( keyStack[2] );
    Keyboard.set_key4( keyStack[3] );
    Keyboard.set_key5( keyStack[4] );
    Keyboard.set_key6( keyStack[5] );
    Keyboard.send_now();
  }
}
