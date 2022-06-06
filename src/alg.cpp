// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int a, b = 0;
  for (a = 0; a < size; a++)
      if (arr[a] == value)
          b++;
  return b;
  return 0; 
}
