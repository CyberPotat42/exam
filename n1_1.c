// это фрагмент программы на си
void main() {
  int a = 0;
  int b = 42;
  int c = a + b;
}

// а это фрагмент программы на ассембере
// load 500 1   // перемещяем из 500 ячейки оперативки в 1 регистр
// load 300 2   // перемещяем из 300 ячейки оперативки во 2 регистр
// sum 1 2 3    // складываем значения в 1 и 2 регистрах и вносим в регистр 3
// dump 3 700   // записываем значение из регистра 3 в 700 ячейку оперативки