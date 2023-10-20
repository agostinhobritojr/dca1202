class Base{
public:
    int a, b;
};
class Derivada : public Base{
    int c;
public:
    void operator=(Base &x){
        a = x.a;
        b = x.b;
        c = 0;
    }
};
int main(void){
    Base b;
    Derivada d;
    b = d;
    d = b; // Erro! "d" possui parte indefinida.
}
