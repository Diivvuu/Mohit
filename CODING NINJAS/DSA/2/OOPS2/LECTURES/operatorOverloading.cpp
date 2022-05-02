class Fraction {
    private :
        int numerator;
        int denominator;
    public :
        Fraction(int numerator, int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }
        void print() {
            cout << this -> numerator << " / " << this -> denominator << endl;
        }
        void simplify() {
            int gcd = 1;
            int j = min(this -> numerator, this -> denominator);
            for(int i = 1; i <= j; i++) {
                if(numerator % i == 0 && denominator % i == 0) {
                    gcd = i;
                }
            }
            this -> numerator = this -> numerator/gcd;
            this -> denominator = this -> denominator/gcd;
        }
        Fraction add(Fraction const &f2) {
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + (y*f2.numerator);

            Fraction fnew(num, lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator+(Fraction const &f2) { 
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + (y*f2.numerator);

            Fraction fnew(num, lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator*(Fraction const &f2) {
            int num = this -> numerator * f2.numerator;
            int den = this -> denominator * f2.denominator;

            Fraction fnew(num, den);
            fnew.simplify();
            return fnew;
        }
        bool operator==(Fraction const &f2) const {
            return (numerator == f2.numerator && denominator == f2.denominator);
        }
        void multiply(Fraction const &f2) {
            this -> numerator = numerator*f2.numerator;
            this -> denominator = denominator*f2.denominator;

            simplify();
        }
        Fraction& operator++() {//passsed by reference coz we don't want to make its copy like in ++(++f1) pehle f1 ki koi copy na bne!
            this -> numerator = this -> numerator + denominator;
            simplify();

            return *this;
        }
        Fraction operator++(int) {
            Fraction fnew(numerator, denominator);
            numerator = numerator + denominator;
            simplify();
            fnew.simplify();
            return fnew;
        }
        Fraction & operator+=(Fraction const &f2) {
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = (x*numerator) + (y*f2.numerator);
            
            numerator = num;
            denominator = lcm;
            simplify();
            return *this;
        }

};