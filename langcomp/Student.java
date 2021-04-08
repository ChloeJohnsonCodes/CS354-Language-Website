public class Student {
    private String major;


    public Student() {
        this.major = "Undecided";
    }

    public String getMajor() {
        return major;
    }

    public void setMajor(String major) {
        this.major = major;
    }



    public static void main(String[] args) {
	    Student student = new Student();
        System.out.println(student.getMajor());
	    student.setMajor("Computer Science");
        System.out.println(student.getMajor());
    }
}
