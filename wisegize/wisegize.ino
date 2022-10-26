#define NUM_ELEMENTS 3

float weights[NUM_ELEMENTS] = {0.1, 0.2, 0};
float inputs[NUM_ELEMENTS] = {8.5, 0.65, 1.2};
float output[NUM_ELEMENTS];

int num_A = 5;
int num_B = 3;


int add(int val_1, int val_2)
{
  int result = val_1 + val_2;
  return result;
}

void elementwise_multiplication(float arr_1[], float arr_2[], float buffer[], int len)
{
  for (int i = 0; i < len; i++)
  {
    buffer[i] = arr_1[i] * arr_2[i];
  }
}

void setup() {

  Serial.begin(9600);

  int sum = add(num_A, num_B); // sum now holds 8
  elementwise_multiplication(weights, inputs, output, NUM_ELEMENTS);

}

void loop() {
  // put your main code here, to run repeatedly:

}
