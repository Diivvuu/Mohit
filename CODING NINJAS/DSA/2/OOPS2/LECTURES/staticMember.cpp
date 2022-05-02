class Student {
    static int totalStudents;
    
    public :
        int age;
        int rollNo;

        Student () {
            totalStudents++;
        }

        int getRollNumber() {
            return rollNo;
        }

        static int getTotalStudents() {
            return totalStudents;
        }
};
int Student :: totalStudents = 0;