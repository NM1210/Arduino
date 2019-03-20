int led = 13;
String a;
int i;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("Enter a string");
  while(Serial.available()==0)
  {  }
  a = Serial.readString();
  Serial.println("String entered : ");
  Serial.print(a);
  //Serial.print(sizeof(a));
}

void loop() {
  for(i=0;a[i]!='\0';i=i+1)
  {
   if(a[i]=='0')
   {
    dash();
    dash();
    dash();
    dash();
    dash();  
   }
   if(a[i]=='1')
   {
    dot();
    dash();
    dash();
    dash();
    dash();  
   }
   if(a[i]=='2')
   {
    dot();
    dot();
    dash();
    dash();
    dash();  
   }
   if(a[i]=='3')
   {
    dot();
    dot();
    dot();
    dash();
    dash();  
   }
   if(a[i]=='4')
   {
    dot();
    dot();
    dot();
    dot();
    dash(); 
   }
   if(a[i]=='5')
   {
    dot();
    dot();
    dot();
    dot();
    dot();   
   }
   if(a[i]=='6')
   {
    dash();
    dot();
    dot();
    dot();
    dot();   
   }
   if(a[i]=='7')
   {
    dash();
    dash();
    dot();
    dot();
    dot();  
   }
   if(a[i]=='8')
   {
    dash();
    dash();
    dash();
    dot();
    dot(); 
   }
   if(a[i]=='9')
   {
    dash();
    dash();
    dash();
    dash();
    dot();  
   }
   if(a[i]=='.')
   {
    dot();
    dash();
    dot();
    dash();
    dot();
    dash();  
   }
   if(a[i]==',')
   {
    dash();
    dash();
    dot();
    dot();
    dash();
    dash();  
   }
   if(a[i]=='?')
   {
    dot();
    dot();
    dash();
    dash(); 
    dot();
    dot(); 
   }
   if(a[i]=="'")
   {
    dot();
    dash();
    dash();
    dash();
    dash();
    dot(); 
   }
    if(a[i]=='!')
   {
    dash();
    dot();
    dash();
    dot();
    dash();
    dash();  
   }
    if(a[i]=='!')
   {
    dash();
    dot();
    dot();
    dot();
    dot();
    dash();  
   }
   if(a[i]=='A'||a[i]=='a')
   {
    dot();
    dash();
   }
   else if(a[i]=='B'||a[i]=='b')
   {
    dash();
    dot();
    dot();
    dot();
   }
   else if(a[i]=='C'||a[i]=='c')
   {
    dash();
    dot();
    dash();
    dot();
   }
   else if(a[i]=='D'||a[i]=='d')
   {
    dash();
    dot();
    dot();
   }
   else if(a[i]=='E'||a[i]=='e')
   {
    dot();
   }
   else if(a[i]=='F'||a[i]=='f')
   {
    dot();
    dot();
    dash();
    dot();
   }
   else if(a[i]=='G'||a[i]=='g')
   {
    dash();
    dash();
    dot();
   }
   else if(a[i]=='H'||a[i]=='h')
   {
    dot();
    dot();
    dot();
    dot();
   }
   else if(a[i]=='I'||a[i]=='i')
   {
    dot();
    dot();
   }
   else if(a[i]=='J'||a[i]=='j')
   {
    dot();
    dash();
    dash();
    dash();
   }
   else if(a[i]=='K'||a[i]=='k')
   {
    dash();
    dot();
    dash();
   }
   else if(a[i]=='L'||a[i]=='l')
   {
    dot();
    dash();
    dot();
    dot();
   }
   else if(a[i]=='M'||a[i]=='m')
   {
    dash();
    dash();
   }
   else if(a[i]=='N'||a[i]=='n')
   {
    dash();
    dot();
   }
   else if(a[i]=='O'||a[i]=='o')
   {
    dash();
    dash();
    dash();
   }
   else if(a[i]=='P'||a[i]=='p')
   {
    dot();
    dash();
    dash();
    dot();
   }
   else if(a[i]=='Q'||a[i]=='q')
   {
    dash();
    dash();
    dot();
    dash();
   }
   else if(a[i]=='R'||a[i]=='r')
   {
    dot();
    dash();
    dot();
   }
   else if(a[i]=='S'||a[i]=='s')
   {
    dot();
    dot();
    dot();
   }
   else if(a[i]=='T'||a[i]=='t')
   {
    dash();
   }
   else if(a[i]=='U'||a[i]=='u')
   {
    dot();
    dot();
    dash();
   }
   else if(a[i]=='V'||a[i]=='v')
   {
    dot();
    dot();
    dot();
    dash();
   }
   else if(a[i]=='W'||a[i]=='w')
   {
    dot();
    dash();
    dash();
   }
   else if(a[i]=='X'||a[i]=='x')
   {
    dash();
    dot();
    dot();
    dash();
   }
   else if(a[i]=='Y'||a[i]=='y')
   {
    dash();
    dot();
    dash();
    dash();
   }
   else if(a[i]=='Z'||a[i]=='z')
   {
    dash();
    dash();
    dot();
    dot();
   }
   else if(a[i]==' ')
   {
    delay(2000);
   }
 }
 Serial.println("\nPASS");
}

void dot()
{
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000); 
}

void dash()
{
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW);
    delay(1000);
}
