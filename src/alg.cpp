// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int c = 0, s = 0, d = size - 1;
while (s < d) {
int m = (s + d) / 2;
if (arr[m] == value) {
c++;
int t = m;
while (arr[--m] == value) {
c++;
}
while (arr[++t] == value) {
c++;
}
return c;
} else if (arr[m] > value) {
d = m;
} else {
s = m + 1;
}
}
return 0; // если ничего не найдено
}
