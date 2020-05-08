void setup() 
{
Serial.begin(9600);
pinMode(7,OUTPUT);//retrives 5v power for 1st motor frm this pin
pinMode(2,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);//retrives 5v power for 1st motor frm this pin
pinMode(11,OUTPUT);
pinMode(13,OUTPUT); 

//THE BUTTONS
//q:To move bck(buttton connected to pin 3 enables the vehicle to move backward)
//w:To move frward
//e:To move left
//r:To move right;
}

void loop() 
{
digitalWrite(8,HIGH);          //ACTIVATES MOTOR
digitalWrite(13,HIGH);
char a;
         while(!Serial.available());
         a=Serial.read();
         
         
         if(a=='q')
         {
         digitalWrite(7,LOW);          //MOVES IN bckWARD DIRECTION 
         digitalWrite(2,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,LOW);
         delay(100);
         digitalWrite(7,LOW);          
         digitalWrite(2,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
        }

        
          if(a=='w')
         {
         digitalWrite(7,HIGH);           //MOVES IN frWARD DIRECTION
         digitalWrite(2,LOW);
         digitalWrite(10,LOW);           
         digitalWrite(11,HIGH);
         delay(100);
         digitalWrite(7,LOW);          
         digitalWrite(2,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         
         }
         
          
          if (a=='e')
          {
         digitalWrite(7,LOW);          //MOVES IN left DIRECTION 
         digitalWrite(2,HIGH);
         digitalWrite(10,LOW);
         digitalWrite(11,HIGH);
         delay(100);
         digitalWrite(7,LOW);          
         digitalWrite(2,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         
          }
         
         if(a=='r')
         {
         digitalWrite(7,HIGH);           //MOVES IN RIGHT DIRECTION
         digitalWrite(2,LOW);
         digitalWrite(10,HIGH);           
         digitalWrite(11,LOW);
         delay(100);
         digitalWrite(7,LOW);          
         digitalWrite(2,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
         
         }
}

