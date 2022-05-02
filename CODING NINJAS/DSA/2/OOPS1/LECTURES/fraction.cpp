class Fraction {
    private:
        int num;
        int den;
    
    public:
        Fraction(int num, int den) {
            this -> num = num;
            this -> den = den;
        }
        void print(){
            cout << this -> num << " / " << this -> den << endl;
        }
        void simplify(){
            int gcd = 1;
            int j = min(this -> num, this -> den);
            for(int i = 1; i <= j; i++) {
                if(this -> num%i == 0 && this -> den%i == 0) {
                    gcd = i;
                }
            }
            this -> num = this -> num / gcd;
            this -> den = this -> den / gcd;
        }
        void add(Fraction &f2) {
            int lcm = den*f2.den;
            int x = lcm/den;
            int y = lcm/f2.den;
            int newNum = x*num + y*f2.num;

            num = newNum;
            den = lcm;

            simplify();
        }
        void multiply(Fraction &f2) {
            num = this -> num * f2.num;
            den = this -> den * f2.den;

            simplify();
        }
};