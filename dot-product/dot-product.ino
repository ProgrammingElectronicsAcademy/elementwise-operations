#define NUM_ELEMENTS 3

float weights[NUM_ELEMENTS] = {0.1, 0.2, 0};
float inputs[NUM_ELEMENTS] = {8.5, 0.65, 1.2};
float output[NUM_ELEMENTS];

void elementwise_multiplication(float arr_1[], float arr_2[], float buffer[], int len)
{
  for (int i = 0; i < len; i++)
  {
    buffer[i] = arr_1[i] * arr_2[i];
  }
}

float sum_array_elements(float arr[], int len)
{
  float result = 0;

  for (int i = 0; i < len; i++)
  {
    result += arr[i];
  }

  return result;
}

float dot_product(float arr_1[], float arr_2[], float buffer[], int len)
{
  elementwise_multiplication(arr_1, arr_2, buffer, len);
  
  float result = sum_array_elements(buffer, len);
  
  return result;
}

void setup()
{
  Serial.begin(9600);

  float answer = dot_product(weights, inputs, output, NUM_ELEMENTS);
  
  Serial.println(answer);
}

void loop()
{
}
