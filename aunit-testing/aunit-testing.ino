#include <AUnit.h>

#define NUM_ELEMENTS 3

float weights[NUM_ELEMENTS] = {0.1, 0.2, 0};
float inputs[NUM_ELEMENTS] = {8.5, 0.65, 1.2};
float output[NUM_ELEMENTS];

/******************************************
   Array Functions
 ******************************************/
void elementwise_multiplication(float arr_1[], float arr_2[], float buffer[], int len = NUM_ELEMENTS)
{
  for (int i = 0; i < len; i++)
  {
    buffer[i] = arr_1[i] * arr_2[i];
  }
}

/******************************************
   TESTS
 ******************************************/
test(elementwise_multiplication_stores_correct_answer_in_buffer)
{
  int test_size = 3;
  float test_arr_1[test_size] = {0.1, 0.2, 0};
  float test_arr_2[test_size] = {8.5, 0.65, 1.2};
  float correct_answers[test_size] = {0.85, 0.13, 0.00};
  float test_buffer[test_size];

  elementwise_multiplication(test_arr_1, test_arr_2, test_buffer, test_size);

  for (int i = 0; i < test_size; i++)
  {
    assertEqual(correct_answers[i], test_buffer[i]);
  }
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  aunit::TestRunner::run();
}
