// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i, b = 0;
  for (i = 0; i < size; i++)
      if (arr[i] == value)
          b++;
  return b;
  return 0; 
}
