//common anode ---> 5V
//common cathode ---> GND
//2=a,3=b,4=c,5=d,6=r,7=f,8=g

//            g f com a b
//            | |  |  | |
//            | |  |  | |
//            | |  |  | |
//            -----2-----
//            |   (a)   |
//         (f)7         3(b)
//            |         |
//            -----8-----
//            |   (g)   |
//         (e)6         4(c)
//            |   (d)   |
//            -----5-----
//            | |  |  | |
//            | |  |  | |
//            | |  |  | |
//            e d com c D.P.
                    
int num,pin;
int num_arr[10][7] ={
  {0,0,0,0,0,0,1},  //0
  {1,0,0,1,1,1,1},  //1
  {0,0,1,0,0,1,0},  //2
  {0,0,0,0,1,1,0},  //3
  {1,0,0,1,1,0,0},  //4
  {0,1,0,0,1,0,0},  //5
  {0,1,0,0,0,0,0},  //6
  {0,0,0,1,1,1,1},  //7
  {0,0,0,0,0,0,0},  //8
  {0,0,0,0,1,0,0}   //9
};

void setup() {
  // put your setup code here, to run once:

  //define PinModes
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(num=0;num<10;num++)
  {
    for(pin=2;pin<=8;pin++)
    {
      digitalWrite(pin,num_arr[num][pin-2]);
    }
    delay(1000);
  }
}
