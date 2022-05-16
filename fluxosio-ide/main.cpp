#include <cstdlib>
#include <fstream>

int main(void) {
  std::ofstream fout;
  fout.open("/home/ambj/nome_do_usuario.txt");
  if (!fout.is_open()) {
    exit(1);
  }
  fout << "Agostinho Brito \n";
  fout.close();
}
