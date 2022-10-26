int data = 10;

void addOne(int val)
{
  val = val + 1;
}

void setup()
{
  Serial.begin(9600);
  
  Serial.print("data before: ");
  Serial.println(data);
  addOne(data);
  Serial.print("data after : ");
  Serial.println(data);
}

void loop()
{
}
