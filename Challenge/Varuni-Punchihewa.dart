// https://github.com/Varuni-Punchihewa

void main() {
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      print('Spider');
    } else if (i % 3 == 0) {
      print('Rat');
    } else if (i % 5 == 0) {
      print('Ghost');
    } else {
      print(i);
    }
  }
}
