#include <iostream>

using namespace std;
/*
 * char - no standard
 * unsigned char 0 - 255
 * signed char -127 - +127
 */
void caratteri() {
  char c = 'a';
  char c2 = '\0';

  cout << c << " " << int(c) << endl; // cast a int
  cout << 97 << " " << char(97) << endl; // cast int to char

  cout << sizeof(char) << " " << sizeof(int) << endl;

  for (int ascii=256; ascii<512; ++ascii) {
    string tmp = "";
    cout << "Codice " << ascii << " Carattere#"
         << char(ascii) << "#\n";

    if( (ascii + 1) % 20 == 0 )
      getline(cin, tmp);
  }
}


/*
 * set che servono a rappresentare un qualsiasi insieme di caratteri che ha 16 bit o 32 o ecc..
 * char16_t
 * char_32_t
 * wild char (ampio): garantisce la memorizzazione di qualsiasi carattere
 * wchar_t
 */
void approfondimento() {
  char16_t  c2 = u'\u15AD'; //abbreviazione per U'\U000015AD'
  char32_t  c3 = U'\U10FA10FA';
  //system("chcp 10000"); setta la codifica altrimenti non si può leggere quel carattere c2
  cout << c2 << endl;
}


int main() {
  approfondimento();

}


