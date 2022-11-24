/*
 * Exercise 7-2, hotel.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 66

int main(void) {
  FILE *fp;
  char f_path[] = "hotel1.txt";
  char s[MAX_CHAR];
  char first_name[MAX_CHAR], last_name[MAX_CHAR];
  int n_night, price_per_night, tax_rate;


  fp = fopen(f_path, "r");
  if (!fp) {
    return 1;
  }

  int i = 0;
  while (fgets(s, MAX_CHAR, fp)) {
    switch (i) {
      case 0: 
        strcpy(first_name, s);
        first_name[strlen(first_name) - 1] = '\0';
        break;

      case 1:
        strcpy(last_name, s);
        last_name[strlen(last_name) - 1] = '\0';
        break;
      
      case 2:
        sscanf(s, "%d %d %d", &n_night, &price_per_night, &tax_rate);
        break;
      
      default:
        return 1;
    }
    i++;
  }

  double price = n_night * price_per_night * (double)(100 + tax_rate) / 100;

  puts("================RECEIPT================");
  printf("RECEIVED FROM : %s %s\n", first_name, last_name);
  printf("AMOUNT : %.0f YEN\n", price);
  printf("IN PAYMENT OF ACCOMMODATIONS (%d NIGHTS)\n\n", n_night);
  puts("Thank you for your payment\nFUN Hotels\n======================================");

  fclose(fp);

  return 0;
}
