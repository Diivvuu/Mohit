class ComplexNumbers{
	private:
		int real;
		int imaginary;
	public :
		ComplexNumbers (int real, int imaginary){
			this -> real = real;
			this -> imaginary = imaginary;
		}
		void plus(ComplexNumbers c2){
			int r = this -> real + c2.real;
			int i = this -> imaginary + c2.imaginary;
			this -> real = r;
			this -> imaginary = i;
		}
		void multiply(ComplexNumbers c2){
			int r = (this -> real * c2.real) - (this -> imaginary * c2.imaginary);
			int i = (this -> real * c2.imaginary) + (this -> imaginary * c2.real);
			this -> real = r;
			this -> imaginary = i;
		}
		void print(){
			cout << this -> real << " + i" << this -> imaginary << endl;
		}
};
// class ComplexNumbers{
// 	private:
// 		int real;
// 		int imaginary;
// 	public:
// 		ComplexNumbers(int real,int imaginary){
// 			this -> real = real;
// 			this -> imaginary = imaginary;
// 		}
// 		void plus(ComplexNumbers c2){
// 			int r = this -> real + c2.real;
// 			int i = this -> imaginary + c2.imaginary;
// 			this -> real = r;
// 			this -> imaginary = i;
// 		}
// 		void multiply(ComplexNumbers c2){
// 			int r = (this -> real * c2.real) - (this -> imaginary * c2.imaginary);
// 			int i = (this -> real * c2.imaginary) + (c2.real * this -> imaginary);
// 			this -> real = r;
// 			this -> imaginary = i;
// 		}
// 		void print(){
// 			cout << this -> real << " + " << "i" << this -> imaginary << endl;
// 		}
// };