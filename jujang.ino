/*
 5번핀:모드변경
 4번핀:저장
 3번핀:불러오기
 2번핀:새파일
*/

#include <Keyboard.h>//키보드 라이브러리 선언

void setup()
{
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
  Keyboard.begin();//키보드로 인식 시작
  int aa = 0;//모드가 어떤 모드인지 확인하는 변수
}

void loop() 
{
  if (digitalRead(4) == HIGH)
  {
    ctrls();
  }
  else
  {
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('s');
    Keyboard.release('o');
    Keyboard.release('n');   
  }
  if (digitalRead(3) == HIGH)
  {
    ctrlo();
  }
  else
  {
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('s');
    Keyboard.release('o');
    Keyboard.release('n');   
  }
  if (digitalRead(2) == HIGH)
  {
    ctrln();
  }
  else
  {
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release('s');
    Keyboard.release('o');
    Keyboard.release('n');   
  }
}

void ctrls()//저장
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  delay(300);
}

void ctrlo()//불러오기
{  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('o');
  delay(300);
}

void ctrln()//새파일
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('n');
  delay(300);
}
