#define NUM_ELEMENTS 3

int data[NUM_ELEMENTS] = {2, 5, 3};

void fillSevens(int arr[], int len)
{
  for (int i = 0; i < len; i ++)
  {
    arr[i] = 7;
  }
}

void printIntArray(int arr[], int len)
{
  for (int i = 0; i < len; i ++)
  {
    Serial.print(arr[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void setup()
{
  Serial.begin(9600);

  Serial.print("data before: ");
  printIntArray(data, NUM_ELEMENTS);

  fillSevens(data, NUM_ELEMENTS);

  Serial.print("data after : ");
  printIntArray(data, NUM_ELEMENTS);
}

void loop()
{
}
