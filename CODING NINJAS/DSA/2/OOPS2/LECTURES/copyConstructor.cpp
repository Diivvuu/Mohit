class Student {
    private :
        int age;
    public:
        char *name;

        Student(int age, char *name) {
            this -> age = age;
            this -> name = new char[strlen(name) + 1];
            strcpy(this -> name, name);
        }
        Student(Student const &s2) {
            this -> age = s2.age;
            this -> name = new char[strlen(s2.name) + 1];
            strcpy(this -> name, s2.name);
        }
        void display() {
            cout << name <<  " " << age << endl;
        }
};